`timescale 1ns/1ns
`include "regn.v"
module regn_tb;
parameter n=8;
integer i=2;
reg [n-1:0]I;
reg clk;
wire [n-1:0]Q;
regn r1(I,clk,Q);
always #10 clk=~clk;
initial begin
$dumpfile("regn_tb.vcd");
$dumpvars(0,regn_tb);
clk=0;
end
initial begin
for(i=2;i<128;i=i*2)
begin
I=i;
#20;
end
$finish;
end
endmodule
