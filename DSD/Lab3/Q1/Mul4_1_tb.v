`timescale 1ns/1ns
`include "Mul4_1.v"
module Mul4_1_tb;
reg [0:3]W;
reg [1:0]S;
wire f;
Mul4_1 M1(W,S,f);
initial begin
	$dumpfile("Mul4-1_tb.vcd");
	$dumpvars(0,Mul4_1_tb);
	W=4'b1101;
	S=2'b00;
	#20 ;
	W=4'b1101;
	S=2'b01;
	#20;
	W=4'b1101;
	S=2'b10;
	#20;
	W=4'b1101;
	S=2'b11;
	#20;
	$display("Test_Complete");
end
endmodule
