`timescale 1ns/1ns
`include "penc4to2.v"
module penc4to2_tb;
reg [3:0]W;
wire [1:0]Y;
wire s;
integer i;
penc4to2 p(W,Y,z);
initial begin
$dumpfile("penc4to2_tb.vcd");
$dumpvars(0,penc4to2_tb);
for(i=0;i<16;i=i+1)
begin
W=i;
#10;
end
end
endmodule
