`timescale 1ns/1ns
`include "R_4.v"
module R_4_tb;
reg reset,clk;
wire [3:0]c;
R_4 R(reset,clk,c);
always #10 clk=~clk;
initial begin
$dumpfile("R_4_tb.vcd");
$dumpvars(0,R_4_tb);
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
$finish;
end
endmodule
