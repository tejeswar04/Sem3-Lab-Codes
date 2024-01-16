`timescale 1ns/1ns
`include "Q2.v"
module Q2_tb;
reg reset,clk;
wire [4:0]c;
Q2 R(clk,reset,c);
always #10 clk=~clk;
initial begin
$dumpfile("Q2_tb.vcd");
$dumpvars(0,Q2_tb);
clk=0;
end
initial begin
	reset=1'b1;#20;
	reset=1'b0;#20;
	reset=1'b0;#20;
	reset=1'b0;#20;
	reset=1'b0;#20;
	reset=1'b0;#20;
	reset=1'b0;#20;
	reset=1'b0;#20;
	reset=1'b0;#20;
	reset=1'b0;#20;
	reset=1'b0;#20;
	reset=1'b0;#20;
$finish;
end
endmodule
