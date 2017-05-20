`ifndef FOUR_BIT_ALU
`define FOUR_BIT_ALU

module FourBitALU(
	input wire [5:0] opcode,
	input wire [3:0] a,
	input wire [3:0] b,
	output reg [3:0] r,
	output wire zf,
	output reg cf
);

	`include "cpu_opcodes.v"

	reg [3:0] c;
	
	always @(opcode, a, b)
	
		begin 
			
			cf = 0;
		
			case (opcode)	// synthesis full_case
			
				OP_AND_A_B:				r = a & b;
				
				OP_OR_A_B:				r = a | b;
				
				OP_XOR_A_B:				r = a ^ b;
				
				OP_NOT_A,
				OP_NOT_B,
				OP_NOT_C:				r = ~a;
				
				OP_INC_A, 
				OP_INC_B,
				OP_INC_C:				{cf, r[3], r[2], r[1], r[0]} = 
											{1'b0, a[3], a[2], a[1], a[0]} + 5'b00001;
											
				OP_DEC_A, 
				OP_DEC_B,
				OP_DEC_C:				begin
											r = {1'b0, a[3], a[2], a[1], a[0]} - 5'b00001; 
											cf = (a == 0);
										end

				OP_SHL_A, 
				OP_SHL_B,
				OP_SHL_C:				{cf, r[3], r[2], r[1], r[0]} = 
											{a[3], a[2], a[1], a[0], 1'b0};
				
				OP_SHR_A, 
				OP_SHR_B,
				OP_SHR_C:				{r[3], r[2], r[1], r[0], cf} = 
											{1'b0, a[3], a[2], a[1], a[0]};
											
				OP_TST_A,
				OP_TST_B,
				OP_TST_C:				r = a;
											
				OP_ADD_A_B:				begin				
											r[0] = a[0] ^ b[0];
											c[1] = a[0] & b[0];

											r[1] = a[1] ^ b[1] ^ c[1];
											c[2] = a[1] & b[1] | (a[1] ^ b[1]) & c[1];

											r[2] = a[2] ^ b[2] ^ c[2];
											c[3] = a[2] & b[2] | (a[2] ^ b[2]) & c[2];

											r[3] = a[3] ^ b[3] ^ c[3];
											cf = a[3] & b[3] | (a[3] ^ b[3]) & c[3];
										end
			
			endcase
		end
		
	assign zf = (r == 0);

endmodule

`endif