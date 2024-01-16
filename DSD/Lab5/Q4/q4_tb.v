`timescale 1ns/1ns
`include "q4.v"
module q4_tb;
reg [0:2]W;
wire f;
integer i;
q4 q(W,f);
initial begin
$dumpfile("q4_tb.vcd");
$dumpvars(0,q4_tb);
for(i=0;i<8;i++)
begin
W=i;
#5;
end
end
endmodule
