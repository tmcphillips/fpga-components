`ifndef BUTTON_PRESS_DETECTOR
`define BUTTON_PRESS_DETECTOR

module ButtonPressDetector(
	input wire	buttonDown,
	input wire 	ackPress,
	input wire 	clock,
	input wire 	reset,
	output wire	wasPressed
);

	parameter WAIT_UP			= 3'b000;
	parameter BTN_UP			= 3'b001;
	parameter DEBOUNCE_1		= 3'b010;
	parameter DEBOUNCE_2		= 3'b011;
	parameter DEBOUNCE_3		= 3'b100;
	parameter BTN_PRESSED	= 3'b101;

	reg [2:0] state;

	always @(posedge reset, posedge clock)
	
		if (reset)
			state <= WAIT_UP;

		else 
			case (state)
			
				BTN_UP: 		if (buttonDown)
									state <= DEBOUNCE_1; 
				
				DEBOUNCE_1: 	if (buttonDown)
									state <= DEBOUNCE_2;
								else
									state <= BTN_UP;
	
				DEBOUNCE_2:		if (buttonDown)
									state <= DEBOUNCE_3;
								else
									state <= BTN_UP;
	
				DEBOUNCE_3: 	if (buttonDown)
									state <= BTN_PRESSED;
								else
									state <= BTN_UP;
				
				BTN_PRESSED:	if (ackPress)
									state <= WAIT_UP;		
				
				WAIT_UP: 		if (!buttonDown & !ackPress)
									state <= BTN_UP;
									
				default: 		state <= WAIT_UP;
				
			endcase

	assign wasPressed = (state == BTN_PRESSED);
		
endmodule

`endif