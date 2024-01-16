`timescale 1ns/1ns
`include "comp_3b.v"
module comp_3b_tb;
reg [2:0]A,B;
wire eq,gt,lt;
comp_3b c1(A,B,eq,gt,lt);
initial begin
	$dumpfile("comp_3b_tb.vcd");
	$dumpvars(0,comp_3b_tb);
	A=3;
	B=3;
	#5;
	A=2;
	B=5;
	#5;
	A=6;
	B=4;
	#5;
end
endmodule
	
