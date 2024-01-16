`timescale 1ns/1ns
`include "GtoB.v"
module GtoB_tb;
reg [3:0]g;
wire [3:0]b;
GtoB g1(g,b);
initial begin
	$dumpfile("GtoB_tb.vcd");
	$dumpvars(0,GtoB_tb);
	g=4'b0000;
	#20;
	g=4'b0001;
	#20;
	g=4'b0010;
	#20;
	g=4'b0011;
	#20;
	g=4'b0100;
	#20;
	g=4'b0101;
	#20;
	g=4'b0110;
	#20;
	g=4'b0111;
	#20;
	g=4'b1000;
	#20;
	g=4'b1001;
	#20;
	g=4'b1010;
	#20;
	g=4'b1011;
	#20;
	g=4'b1100;
	#20;
	g=4'b1101;
	#20;
	g=4'b1110;
	#20;
	g=4'b1111;
	#20;
end
endmodule
