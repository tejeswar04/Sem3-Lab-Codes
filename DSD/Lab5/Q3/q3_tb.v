`timescale 1ns/1ns
`include "q3.v"
module q3_tb;
reg [3:0]W;
wire f;
integer i;
q3 q(W,f);
initial begin
$dumpfile("q3_tb.vcd");
$dumpvars(0,q3_tb);
for(i=0;i<16;i++)
begin
W=i;
#5;
end
end
endmodule
