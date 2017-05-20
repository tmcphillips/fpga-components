`ifndef BCD_DECADE_COUNTER
`define BCD_DECADE_COUNTER

`include "jkflipflop.v"

module BcdDecadeCounter(
	input wire clock,
	output wire [3:0] q
);

	wire w1, w2;

	JKFlipFlop u0jkff(
		.j(1'b1),
		.k(1'b1),
		.clk(clock),
		.q(q[0]),
		.nq()
	);

	JKFlipFlop u1jkff(
		.j(w2),
		.k(1'b1),
		.clk(q[0]),
		.q(q[1]),
		.nq()
	);

	JKFlipFlop u2jkff(
		.j(1'b1),
		.k(1'b1),
		.clk(q[1]),
		.q(q[2]),
		.nq()
	);

	JKFlipFlop u3jkff(
		.j(w1),
		.k(1'b1),
		.clk(q[0]),
		.q(q[3]),
		.nq(w2)
	);
	
	and u4and (w1, q[2], q[1]);
	
endmodule

`endif