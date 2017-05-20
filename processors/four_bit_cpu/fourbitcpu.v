`include "fourbitalu.v"
`include "ripplescaler.v"
`include "buttonpressdetector.v"

module FourBitCPU( 
	input wire			step		/* synthesis loc="P31"				*/,
	input wire			reset_n		/* synthesis loc="P32"				*/,
	input wire 			oneMHzClock /* synthesis loc="P18"				*/,
	output reg	[3:0]	a_reg		/* synthesis loc="P48,P47,P46,P45"	*/,
	output reg	[3:0]	b_reg		/* synthesis loc="P4,P3,P2,P40"		*/,
	output reg 	[3:0]	c_reg		/* synthesis loc="P10,P9,P8,P7"		*/,
	output reg 			zf			/* synthesis loc="P38"				*/,
	output reg			cf			/* synthesis loc="P39"				*/,
	output reg	[3:0] 	pc			/* synthesis loc="P24,P26,P27,P28" 	*/
);

	`include "cpu_opcodes.v"

	wire debouncedStep;

	wire [3:0] alu_r;
	wire alu_zf;
	wire alu_cf;

	wire [9:0] program [0:10];
	
	assign program[0]  = { OP_LD_A, 	4'b0100 };
	assign program[1]  = { OP_LD_C, 	4'b0011 };
	assign program[2]  = { OP_DEC_C,	4'bxxxx };
	assign program[3]  = { OP_JNC,		4'b0110 };
	assign program[4]  = { OP_LD_A,		4'b0000 };
	assign program[5]  = { OP_JMP,		4'b1010 };
	assign program[6]  = { OP_LD_B_A,	4'bxxxx };
	assign program[7]  = { OP_ADD_A_B,	4'b0011 };
	assign program[8]  = { OP_DEC_C,	4'bxxxx };
	assign program[9]  = { OP_JNZ,		4'b0111 };
	assign program[10] = { OP_JMP,		4'b1010 };
	
	wire [9:0] statement = program[pc];
	wire [5:0] opcode 	= statement[9:4];
	wire [3:0] arg  	= statement[3:0];
	
	reg [3:0] c_reg;
	
	RippleScaler #(.BITS(8)) u0rs (
		.inclock(oneMHzClock),
		.outclock(oneKHzClock)
	);
	
	ButtonPressDetector u1pbd (
		.buttonDown(~step),
		.ackPress(1'b1),
		.clock(oneKHzClock),
		.wasPressed(debouncedStep)
	);
	
	reg [3:0] a_or_b_or_c_reg;
	
	always @(opcode, a_reg, b_reg, c_reg)
		casez (opcode[5:3])		//synthesis full_case
			3'b10?:		a_or_b_or_c_reg = a_reg;
			3'b110:		a_or_b_or_c_reg = b_reg;
			3'b111:		a_or_b_or_c_reg = c_reg;
		endcase
	
	FourBitALU u2alu (
		.opcode(opcode),
		.a(a_or_b_or_c_reg),
		.b(b_reg),
		.r(alu_r),
		.zf(alu_zf),
		.cf(alu_cf)
	);	
	
	reg inc_pc;

	always @(negedge reset_n, posedge debouncedStep)
	
		if (!reset_n)

			begin
				pc 		<= 	4'b0000;
				a_reg 	<= 	4'b0000;
				b_reg 	<= 	4'b0000;
				c_reg	<= 	4'b0000;
				zf 		<= 	1'b0;
				cf 		<= 	1'b0;
			end

		else 
	
			begin: opcodeHandler
			
				inc_pc = 1'b1;
				
				casez (opcode) // synthesis full_case

					6'b10????:		begin
										a_reg 	<= alu_r;
										zf 		<= alu_zf;
										cf 		<= alu_cf;
									end

					6'b110???:		begin
										b_reg 	<= alu_r;
										zf 		<= alu_zf;
										cf 		<= alu_cf;
									end

					6'b111???:		begin
										c_reg 	<= alu_r;
										zf 		<= alu_zf;
										cf 		<= alu_cf;
									end
				
					OP_JMP:			begin
										pc <= arg;
										inc_pc = 1'b0;
									end
					
					OP_JZ:			if (zf)	begin
										pc <= arg;
										inc_pc = 1'b0;
									end
									
					OP_JNZ:			if (!zf) begin
										pc <= arg;
										inc_pc = 1'b0;
									end

					OP_JC:			if (cf)	begin
										pc <= arg;
										inc_pc = 1'b0;
									end
									
					OP_JNC:			if (!cf) begin
										pc <= arg;
										inc_pc = 1'b0;
									end
									
				 	OP_LD_A:		a_reg <= arg;

					OP_LD_B:		b_reg <= arg;
					
					OP_LD_C:		c_reg <= arg;

					OP_LD_A_B:		a_reg <= b_reg;
					
					OP_LD_B_A:		b_reg <= a_reg;
					
					OP_LD_C_A:		c_reg <= a_reg;

					OP_LD_A_C:		a_reg <= c_reg;

					OP_LD_C_B:		c_reg <= b_reg;

					OP_LD_B_C:		b_reg <= c_reg;

				endcase

				if (inc_pc) 
					pc <= pc + 1;

			end	
endmodule

