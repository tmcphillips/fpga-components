`include "macros.v"
`include "buttonpressdetector.v"

`timescale 1us/1ns

module ButtonPressDetector_tb;

	reg buttonDown;
	reg ackPress;
	reg clock;
	reg reset;
	wire wasPressed;	
	wire [2:0] state = u0dut.state;


	// Instantiate the Unit Under Test (UUT)
	ButtonPressDetector u0dut (
		.buttonDown(buttonDown), 
		.ackPress(ackPress), 
		.clock(clock), 
		.reset(reset), 
		.wasPressed(wasPressed)
	);

	// generate system clock signal
	always #1 clock = ~clock;
		
	initial begin

		// set time format
		$printtimescale;
		$timeformat(-6, 10, "", 10);

		// Initialize Inputs
		buttonDown 	= `LOW;
		ackPress		= `LOW;
		clock			= `LOW;
		reset			= `LOW;
        
		resetSystem();
		testLongButtonPress();
		testShortButtonPress();
		testShortButtonBounce();
		testShorterButtonBounce();
		testShortestButtonBounce();
		
		$write("*** SUCCESS ***  Simulation ended succesfully at t = %t \n", $realtime);
		$finish;

	end

	task resetSystem();
		begin

			#2		reset = `HIGH;
			#2		reset = `LOW;
					`ASSERT(	state 		== 	u0dut.WAIT_UP		);
					`ASSERT(	wasPressed 	== 	`LOW					);
		end
	endtask

	task testLongButtonPress(); 
		begin
	
			#2		`ASSERT(	state 		== 	u0dut.BTN_UP		);
					`ASSERT(	wasPressed 	== 	`LOW					);
			
			#2		buttonDown = `HIGH;
			
					`ASSERT(	state 		== 	u0dut.BTN_UP		);
					`ASSERT(	wasPressed 	== 	`LOW					);

			#2		`ASSERT(	state 		== 	u0dut.DEBOUNCE_1	);
					`ASSERT(	wasPressed 	== 	`LOW					);

			#2		`ASSERT(	state 		== 	u0dut.DEBOUNCE_2	);
					`ASSERT(	wasPressed 	== 	`LOW);

			#2		`ASSERT(	state 		== 	u0dut.DEBOUNCE_3	);
					`ASSERT(	wasPressed 	== 	`LOW					);
			
			#2		`ASSERT(	state 		== 	u0dut.BTN_PRESSED	);
					`ASSERT(	wasPressed 	== 	`HIGH					);

			#2		`ASSERT(	state 		== 	u0dut.BTN_PRESSED	);
					`ASSERT(	wasPressed 	== 	`HIGH					);
			
			#2		`ASSERT(	state 		== 	u0dut.BTN_PRESSED	);
					`ASSERT(	wasPressed 	== 	`HIGH					);
			
			#2		`ASSERT(	state 		== 	u0dut.BTN_PRESSED	);
					`ASSERT(	wasPressed 	== 	`HIGH					);
			
			#2		ackPress = `HIGH;
			
					`ASSERT(	state 		== 	u0dut.BTN_PRESSED	);
					`ASSERT(	wasPressed 	== 	`HIGH					);
			
			#2		`ASSERT(	state 		== 	u0dut.WAIT_UP		);
					`ASSERT(	wasPressed 	== 	`LOW					);

			#2		ackPress = `LOW;
			
					`ASSERT(	state 		== 	u0dut.WAIT_UP		);
					`ASSERT(	wasPressed 	== 	`LOW					);

			#2		`ASSERT(	state 		== 	u0dut.WAIT_UP		);
					`ASSERT(	wasPressed 	== 	`LOW					);
			
			#2		buttonDown = `LOW;
			
					`ASSERT(	state 		== 	u0dut.WAIT_UP		);
					`ASSERT(	wasPressed 	== 	`LOW					);
			
			#2		`ASSERT(	state 		== 	u0dut.BTN_UP		);
					`ASSERT(	wasPressed 	== 	`LOW					);
		
		end		
	endtask

	task testShortButtonPress(); 
		begin
	
			#2		`ASSERT(	state 		== 	u0dut.BTN_UP		);
					`ASSERT(	wasPressed 	== 	`LOW					);
			
			#2		buttonDown = `HIGH;
			
					`ASSERT(	state 		== 	u0dut.BTN_UP		);
					`ASSERT(	wasPressed 	== 	`LOW					);

			#2		`ASSERT(	state 		== 	u0dut.DEBOUNCE_1	);
					`ASSERT(	wasPressed 	== 	`LOW					);

			#2		`ASSERT(	state 		== 	u0dut.DEBOUNCE_2	);
					`ASSERT(	wasPressed 	== 	`LOW);

			#2		`ASSERT(	state 		== 	u0dut.DEBOUNCE_3	);
					`ASSERT(	wasPressed 	== 	`LOW					);
			
			#2		`ASSERT(	state 		== 	u0dut.BTN_PRESSED	);
					`ASSERT(	wasPressed 	== 	`HIGH					);

			#2		buttonDown = `LOW;
					
					`ASSERT(	state 		== 	u0dut.BTN_PRESSED	);
					`ASSERT(	wasPressed 	== 	`HIGH					);
			
			#2		`ASSERT(	state 		== 	u0dut.BTN_PRESSED	);
					`ASSERT(	wasPressed 	== 	`HIGH					);

			#2		ackPress = `HIGH;
			
					`ASSERT(	state 		== 	u0dut.BTN_PRESSED	);
					`ASSERT(	wasPressed 	== 	`HIGH					);
			
			#2		`ASSERT(	state 		== 	u0dut.WAIT_UP		);
					`ASSERT(	wasPressed 	== 	`LOW					);

			#2		ackPress = `LOW;
			
					`ASSERT(	state 		== 	u0dut.WAIT_UP		);
					`ASSERT(	wasPressed 	== 	`LOW					);
			
			#2		`ASSERT(	state 		== 	u0dut.BTN_UP		);
					`ASSERT(	wasPressed 	== 	`LOW					);
		
		end		
	endtask
	
		task testShortButtonBounce(); 
		begin
	
			#2		`ASSERT(	state 		== 	u0dut.BTN_UP		);
					`ASSERT(	wasPressed 	== 	`LOW					);
			
			#2		buttonDown = `HIGH;
			
					`ASSERT(	state 		== 	u0dut.BTN_UP		);
					`ASSERT(	wasPressed 	== 	`LOW					);

			#2		`ASSERT(	state 		== 	u0dut.DEBOUNCE_1	);
					`ASSERT(	wasPressed 	== 	`LOW					);

			#2		`ASSERT(	state 		== 	u0dut.DEBOUNCE_2	);
					`ASSERT(	wasPressed 	== 	`LOW					);

			#2		buttonDown = `LOW;
			
					`ASSERT(	state 		== 	u0dut.DEBOUNCE_3	);
					`ASSERT(	wasPressed 	== 	`LOW					);
								
			#2		`ASSERT(	state 		== 	u0dut.BTN_UP		);
					`ASSERT(	wasPressed 	== 	`LOW					);
					
		end		
	endtask
	
	task testShorterButtonBounce(); 
		begin
	
			#2		`ASSERT(	state 		== 	u0dut.BTN_UP		);
					`ASSERT(	wasPressed 	== 	`LOW					);
			
			#2		buttonDown = `HIGH;
			
					`ASSERT(	state 		== 	u0dut.BTN_UP		);
					`ASSERT(	wasPressed 	== 	`LOW					);

			#2		`ASSERT(	state 		== 	u0dut.DEBOUNCE_1	);
					`ASSERT(	wasPressed 	== 	`LOW					);

			#2		buttonDown = `LOW;
			
					`ASSERT(	state 		== 	u0dut.DEBOUNCE_2	);
					`ASSERT(	wasPressed 	== 	`LOW					);
								
			#2		`ASSERT(	state 		== 	u0dut.BTN_UP		);
					`ASSERT(	wasPressed 	== 	`LOW					);
					
		end		
	endtask
	

	task testShortestButtonBounce(); 
		begin
	
			#2		`ASSERT(	state 		== 	u0dut.BTN_UP		);
					`ASSERT(	wasPressed 	== 	`LOW					);
			
			#2		buttonDown = `HIGH;
			
					`ASSERT(	state 		== 	u0dut.BTN_UP		);
					`ASSERT(	wasPressed 	== 	`LOW					);

			#2		buttonDown = `LOW;
					`ASSERT(	state 		== 	u0dut.DEBOUNCE_1	);
					`ASSERT(	wasPressed 	== 	`LOW					);

			#2		`ASSERT(	state 		== 	u0dut.BTN_UP		);
					`ASSERT(	wasPressed 	== 	`LOW					);
					
		end		
	endtask

endmodule



