`timescale 1ns/1ns
`include "FAdder.v"
module FAdder_tb;
reg x1,x2,x3;
wire s,cout;
FAdder F1(x1,x2,x3,s,cout);
initial begin
	$dumpfile("FAdder_tb.vcd");
	$dumpvars(0,FAdder_tb);
	x1=0;
	x2=0;
	x3=0;
	#10;
	x1=0;
	x2=0;
	x3=1;
	#10;
	x1=0;
	x2=1;
	x3=0;
	#10;
	x1=0;
	x2=1;
	x3=1;
	#10;
	x1=1;
	x2=0;
	x3=0;
	#10;
	x1=1;
	x2=0;
	x3=1;
	#10;
	x1=1;
	x2=1;
	x3=0;
	#10;
	x1=1;
	x2=1;
	x3=1;
	#10;
	$display("Test_completed");
end
endmodule
