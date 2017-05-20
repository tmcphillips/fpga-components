`ifndef CLOCK_SYNTHESIZER
`define CLOCK_SYNTHESIZER

module ClockSynthesizer #(
	parameter 	IN_FREQ		= 1000000,
	parameter	OUT_FREQ 	= 1000,
	parameter 	BITS 		= 10
) (
	input wire 	inclock,
	output reg 	outclock
);

	parameter TOGGLE_PERIOD = IN_FREQ / (2 * OUT_FREQ);
	
	reg [BITS-1:0] count;
	
	always @(posedge inclock)
		begin
			count = count + 1; 
			if (count == TOGGLE_PERIOD)
				begin
					count = 0;
					outclock <= ~outclock;
				end
		end
		
endmodule

`endif
