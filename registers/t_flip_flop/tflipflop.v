`ifndef T_FLIP_FLOP
`define T_FLIP_FLOP

module TFlipFlop(
	input wire clk,
	input wire t,
	input wire ar,
	output reg q,
	output wire nq
);

	assign nq = ~q;

	always @(posedge ar, negedge clk)
		if (ar)
			q <= 1'b0;
		else
			q <= ~q;

endmodule

`endif