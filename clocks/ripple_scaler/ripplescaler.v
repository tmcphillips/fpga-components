`ifndef RIPPLE_SCALER
`define RIPPLE_SCALER

`include "ripplecounter.v"

module RippleScaler #(parameter BITS=8)(
	input wire 	inclock,
	input wire 	reset,
	output wire outclock
);	

	wire [BITS-1:0] counter;

	RippleCounter #(.SIZE(BITS)) u1rc (
		.up(inclock),
		.reset(reset),
		.value(counter)
	);
		
	assign outclock = counter[BITS-1];
	
endmodule

`endif