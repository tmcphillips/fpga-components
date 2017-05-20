`ifndef UP_DOWN_COUNTER
`define UP_DOWN_COUNTER

module UpDownCounter #(parameter SIZE=8)(
	input wire 				up, 
	input wire 				down, 
	input wire				load,
	input wire				reset,
	input wire [SIZE-1:0]	data,
	input wire 				clock,
	output wire 			upAck,
	output wire 			downAck,
	output reg [SIZE-1:0]	counter
);

	localparam IDLE 		= 2'b00;
	localparam UP_ACK 	= 2'b01;
	localparam DOWN_ACK 	= 2'b10;

	reg [1:0] state;

	assign upAck 	= (state == UP_ACK);
	assign downAck 	= (state == DOWN_ACK);
	
	always @(posedge reset, posedge clock)
	
		if (reset)			begin
								counter <= 4'b0000;
								state <= IDLE;
							end
		
		else

			if (load)		begin
								counter <= data;
							end
	
			else case (state)
			
				IDLE:		if (up)
				
								begin
									counter <= counter + 1;
									state <= UP_ACK;
								end
								
							else if (down)
							
								begin
									counter <= counter - 1;
									state <= DOWN_ACK;
								end
								
				UP_ACK:		state <= IDLE;
				
				DOWN_ACK:	state <= IDLE;
				
				default:	state <= IDLE;
				
			endcase
	
endmodule

`endif
