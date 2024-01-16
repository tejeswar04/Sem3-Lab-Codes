`timescale 1ns/1ns
`include "Multiplier_3b.v"
module Multiplier_3b_tb;
reg [2:0]a,b;
wire [5:0]p;

Multiplier_3b m1(a,b,p);
initial begin
	$dumpfile("Multiplier_3b_tb.vcd");
	$dumpvars(0,Multiplier_3b_tb);
	a=3'b000;
	b=3'b000;
	#20;
	a=3'b111;
	b=3'b001;
	#20;
	a=3'b101;
	b=3'b011;
	#20;
end
endmodule
