`ifndef KEYPAD_SCANNER
`define KEYPAD_SCANNER

/* 	This module can be used to detect presses of buttons on a 3x4 keypad such as that
	sold by Kanda.com.  It assumes that 12 buttons are arranged in four rows and three
	columns numbered as shown below.  Each button connects one of three column pins on 
	the device to one of four row pins.  The module drives one column high at a time and
	observes which, if any, row is driven high as a consequence.  The combination of active
	column and active row identifies the currently active (pressed) button. The column
	currently being driven changes on each positive edge of the input scanClock signal.

	
							1 -----	2 ----- 3 ---->	 row 4	  (pin 7)
							|		|		|
							|		|		|
							4 ----- 5 ----- 6 ---->  row 3	  (pin 6)
							|		|		|
							|		|		|
		3 x 4 keypad		7 ----- 8 ----- 9 ---->	 row 2 	  (pin 5)
		   pinout			|		|		|
							|		|		|
							* ----- 0 ----- # ---->	 row 1	  (pin 4)
							|		|		|
							|		|		|
							^		^		^
						  col 3   col 2   col 1

						 (pin 3) (pin 2) (pin 1)
			
	The pin numbers above are those for the Kanda.com 3x4 keypad, counting from
	left to right on the circuit board on the back of the keypad when facing the
	back of the keypad with circuit board at top; correspond to the first 7
	wires in the 10-wire ribbon connector that attaches to this keypad (starting from
	the pink wire), and are arranged on the female ribbon connector as follows where pins 
	1 and 2 are nearest the pink wire:
	
							   _____
		Female			-------     --------
		Ribbon			|  1  3  5  7  nc   | 
	   	connector		|  2  4  6  nc nc   |
		pinout  		---------------------
					
		
	Note 1: For this module to work correctly, the CPLD/FPGA input pins
			for keypad pins 4-7 must be configured for pull-down, i.e. must 
			read LOW when the corresponding row is inactive.
	
	Note 2: A current limiting resistor must be placed between the
			keypad and either the column driving output pins or the row input pins
			of the FPGA to prevent excessive current through the device.
*/
	
			
module KeypadScanner(
	input wire 			scanClock,
	input wire [3:0] 	activeRow,
	output reg [2:0] 	activeColumn_reg,
	output reg [3:0] 	activeKey_reg
	);

	parameter ACTIVE_COLUMN_1 	= 3'b001;
	parameter ACTIVE_COLUMN_2 	= 3'b010;
	parameter ACTIVE_COLUMN_3 	= 3'b100;
	
	parameter ACTIVE_ROW_1 		= 4'b0001;
	parameter ACTIVE_ROW_2 		= 4'b0010;
	parameter ACTIVE_ROW_3 		= 4'b0100;
	parameter ACTIVE_ROW_4 		= 4'b1000;
	
	parameter ACTIVE_KEY_1 		= 4'b0001;
	parameter ACTIVE_KEY_2 		= 4'b0010;
	parameter ACTIVE_KEY_3 		= 4'b0011;
	parameter ACTIVE_KEY_4 		= 4'b0100;
	parameter ACTIVE_KEY_5 		= 4'b0101;
	parameter ACTIVE_KEY_6 		= 4'b0110;
	parameter ACTIVE_KEY_7 		= 4'b0111;
	parameter ACTIVE_KEY_8 		= 4'b1000;
	parameter ACTIVE_KEY_9		= 4'b1001;
	parameter ACTIVE_KEY_0 		= 4'b0000;
	parameter ACTIVE_KEY_STAR 	= 4'b0000;
	parameter ACTIVE_KEY_HASH 	= 4'b0000;
	
	always @(posedge scanClock)
	
		begin	
			
			case(activeColumn_reg)

				ACTIVE_COLUMN_1:	begin
										case(activeRow)
											ACTIVE_ROW_4:	activeKey_reg <= ACTIVE_KEY_3;
											ACTIVE_ROW_3:	activeKey_reg <= ACTIVE_KEY_6;
											ACTIVE_ROW_2:	activeKey_reg <= ACTIVE_KEY_9;
											ACTIVE_ROW_1:	activeKey_reg <= ACTIVE_KEY_HASH;
										endcase
										
										activeColumn_reg <= ACTIVE_COLUMN_2;
									end
						
				ACTIVE_COLUMN_2:	begin
										case(activeRow)
											ACTIVE_ROW_4:	activeKey_reg <= ACTIVE_KEY_2;
											ACTIVE_ROW_3:	activeKey_reg <= ACTIVE_KEY_5;
											ACTIVE_ROW_2:	activeKey_reg <= ACTIVE_KEY_8;
											ACTIVE_ROW_1:	activeKey_reg <= ACTIVE_KEY_0;
										endcase
										
										activeColumn_reg <= ACTIVE_COLUMN_3;
									end
			
				ACTIVE_COLUMN_3:	begin
										case(activeRow)
											ACTIVE_ROW_4:	activeKey_reg <= ACTIVE_KEY_1;
											ACTIVE_ROW_3:	activeKey_reg <= ACTIVE_KEY_4;
											ACTIVE_ROW_2:	activeKey_reg <= ACTIVE_KEY_7;
											ACTIVE_ROW_1:	activeKey_reg <= ACTIVE_KEY_STAR;
										endcase
										
										activeColumn_reg <= ACTIVE_COLUMN_1;
									end
							
				default: 			activeColumn_reg <= ACTIVE_COLUMN_1;

			endcase

		end
			
endmodule

`endif