`ifndef DEBOUNCER
`define DEBOUNCER

module Debouncer(
	output reg 	debouncedSignal,
	input wire 	rawSignal,
	input wire 	samplingClock
);

	reg lastSample;
	
	always @(posedge samplingClock)
		begin
			lastSample <= rawSignal;
			debouncedSignal <= lastSample & rawSignal; 
		end
		
endmodule

`endif

