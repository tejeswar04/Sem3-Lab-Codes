`timescale 1ns/1ns
`include "reg6.v"
module reg6_tb;
reg Q,clk;
wire A;
reg6 r1(Q,clk,A);
always #10 clk=~clk;
initial begin
$dumpfile("reg6_tb.vcd");
$dumpvars(0,reg6_tb);
clk=1;
end
initial begin
Q=1;#20;
Q=0;#20;
Q=1;#20;
Q=0;#20;
Q=1;#20;
Q=0;#20;
Q=1;#20;
Q=0;#20;
$finish;
end
endmodule
