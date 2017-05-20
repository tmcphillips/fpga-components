`define HIGH	1'b1
`define LOW		1'b0
`define ASSERT(condition) if (!(condition)) begin $write("*** FAILURE ****  simulation assertion failure at t = %t \n", $realtime); $finish; end
