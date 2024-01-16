`timescale 1ns/1ns
`include "q2.v"
module q2_tb;
reg [3:0]G;
wire [3:0]B;
integer i;
q2 q(G,B);
initial begin
$dumpfile("q2_tb.vcd");
$dumpvars(0,q2_tb);
for(i=0;i<16;i=i+1)
begin
G=i;
#10;
end
end
endmodule
