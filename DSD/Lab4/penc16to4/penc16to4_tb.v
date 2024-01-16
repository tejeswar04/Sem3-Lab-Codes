`timescale 1ns/1ns
`include "penc16to4.v"
module penc16to4_tb;
reg [15:0]W;
wire [3:0]Y;
wire z;
integer i;
penc16to4 p(W,Y,z);
initial begin
$dumpfile("penc16to4_tb.vcd");
$dumpvars(0,penc16to4_tb);
for(i=0;i<16;i=i+1)
begin
W=i;
#10;
end
end
endmodule
