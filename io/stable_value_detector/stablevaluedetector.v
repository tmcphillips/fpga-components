`ifndef STABLE_VALUE_DETECTOR
`define STABLE_VALUE_DETECTOR

module StableValueDetector #(SIZE=1) (
	input wire 				samplingClock,
	input [SIZE-1:0] 		rawValue,
	output reg [SIZE-1:0] 	stableValue_reg,
	output wire 			isStable,
	input wire 				ack
);

	reg [1:0] state_reg;
	reg [SIZE-1:0] valueHistory_reg [1:3];
	
	parameter UNSTABLE		= 2'b00;
	parameter STABLE		= 2'b01;
	parameter WAIT_UNSTABLE	= 2'b11;
	
	always @(posedge samplingClock)
	
		case(state_reg)

			UNSTABLE:		begin
								valueHistory_reg[1] <= rawValue;
								valueHistory_reg[2] <= valueHistory_reg[1];
								valueHistory_reg[3] <= valueHistory_reg[2];

								if (rawValue == (   rawValue
												   & valueHistory_reg[1] 
												   & valueHistory_reg[2]
												   & valueHistory_reg[3]))
									begin
										stableValue_reg <= rawValue;
										state_reg <= STABLE;
									end						
							end
							
			STABLE:			if (ack) state_reg <= WAIT_UNSTABLE;
	
			WAIT_UNSTABLE:  if (rawValue != stableValue_reg) state_reg <= UNSTABLE;
			
			default:		state_reg <= UNSTABLE;
			
		endcase

	assign isStable = (state_reg == STABLE);
		
endmodule
		
`endif

