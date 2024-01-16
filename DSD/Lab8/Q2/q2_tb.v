`timescale 1ns/1ns
`include "q2.v"
module q2_tb;
reg reset;
reg clk;
wire [1:0]A;
reg x;
q2 q(x,A,clk,reset);
always #10 clk=~clk;
initial begin
$dumpfile("q2_tb.vcd");
$dumpvars(0,q2_tb);
clk=0;
end
initial begin
	x=1'b0;reset=1'b1;#20;
	x=1'b1;reset=1'b0;#20;
	x=1'b0;reset=1'b0;#20;
	x=1'b1;reset=1'b0;#20;
	x=1'b0;reset=1'b0;#20;
	x=1'b1;reset=1'b0;#20;
	x=1'b0;reset=1'b0;#20;
	x=1'b1;reset=1'b0;#20;
	x=1'b0;reset=1'b0;#20;
	x=1'b1;reset=1'b0;#20;
$finish;
end
endmodule
