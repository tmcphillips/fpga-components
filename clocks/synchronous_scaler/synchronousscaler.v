`ifndef SYNCHRONOUS_SCALER
`define SYNCHRONOUS_SCALER

module SynchronousScaler #(parameter BITS=8)(
	input wire 	inclock,
	output wire outclock
);	
	reg [BITS-1:0] counter;
	
	always @(negedge inclock) 
		counter = counter + 1;

	assign outclock = counter[BITS-1];
	
endmodule

`endif
