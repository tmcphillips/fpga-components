	// opcodes == 6'b100??? for double argument ALU operations leaving results in A
	parameter OP_AND_A_B	= 6'b100000;
	parameter OP_OR_A_B 	= 6'b100001;
	parameter OP_XOR_A_B	= 6'b100010;
	parameter OP_ADD_A_B	= 6'b100011;

	// opcodes == 6'b101??? for single argument ALU operations leaving results in A
	parameter OP_NOT_A 		= 6'b101000;
	parameter OP_INC_A 		= 6'b101001;
	parameter OP_DEC_A 		= 6'b101010;
	parameter OP_SHL_A 		= 6'b101011;
	parameter OP_SHR_A 		= 6'b101100;
	parameter OP_TST_A 		= 6'b101101;
	
	// opcodes == 6'b110??? for single argument ALU operations operating on B
	parameter OP_NOT_B 		= 6'b110000;
	parameter OP_INC_B		= 6'b110001;
	parameter OP_DEC_B		= 6'b110010;
	parameter OP_SHL_B 		= 6'b110011;
	parameter OP_SHR_B 		= 6'b110100;
	parameter OP_TST_B		= 6'b110101;

	// opcodes == 6'b111??? for single argument ALU operations operating on C
	parameter OP_NOT_C 		= 6'b111000;
	parameter OP_INC_C		= 6'b111001;
	parameter OP_DEC_C		= 6'b111010;
	parameter OP_SHL_C 		= 6'b111011;
	parameter OP_SHR_C 		= 6'b111100;
	parameter OP_TST_C		= 6'b111101;

	// opcodes = 6'01???? for jump operations
	parameter OP_JMP 		= 6'b010000;
	parameter OP_JZ			= 6'b010001;
	parameter OP_JNZ		= 6'b010010;
	parameter OP_JC			= 6'b010011;
	parameter OP_JNC		= 6'b010100;

	// opcodes = 6'00???? for register operations
	parameter OP_NOP		= 6'b000000;
	parameter OP_LD_A 		= 6'b000001;
	parameter OP_LD_B 		= 6'b000010;
	parameter OP_LD_C 		= 6'b001011;
	parameter OP_LD_A_B		= 6'b000011;
	parameter OP_LD_B_A		= 6'b000100;
	parameter OP_LD_C_A		= 6'b000101;
	parameter OP_LD_A_C		= 6'b000110;
	parameter OP_LD_B_C		= 6'b000111;
	parameter OP_LD_C_B		= 6'b001000;
	