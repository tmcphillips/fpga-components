`ifndef JK_FLIP_FLOP
`define JK_FLIP_FLOP


module JKFlipFlop(
	input wire j,
	input wire k,
	input wire clk,
	output reg q,
	output wire nq
);

	assign nq = ~q;
	
	always @(negedge clk)
	
		case ({j, k})
		
			2'b10: q <= 1'b1;
			
			2'b01: q <= 1'b0;
			
			2'b11: q <= ~q;

		endcase

endmodule

`endif