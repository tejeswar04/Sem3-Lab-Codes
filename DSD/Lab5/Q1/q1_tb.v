`timescale 1ns/1ns
`include "q1.v"
module q1_tb;
reg [0:3]W;
wire f;
integer i;
q1 q(W,f);
initial begin
$dumpfile("q1_tb.vcd");
$dumpvars(0,q1_tb);
for(i=0;i<16;i=i+1)
begin
W=i;
#10;
end
end
endmodule
