`timescale 1ns/1ns
`include "Q3.v"
module Q3_tb;
reg reset,clk;
wire [3:0]c;
Q3 R(clk,reset,c);
always #10 clk=~clk;
initial begin
$dumpfile("Q3_tb.vcd");
$dumpvars(0,Q3_tb);
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
