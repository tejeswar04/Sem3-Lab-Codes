`timescale 1ns/1ns
`include "dec4to16.v"
module dec4to16_tb;
reg [3:0]W;
wire [0:15]Y;
reg En;
dec4to16 d(W,Y,En);
initial begin
$dumpfile("dec4to16_tb.vcd");
$dumpvars(0,dec4to16_tb);
W=0;En=1;
#10;
W=1;En=1;
#10;
W=2;En=1;
#10;
W=3;En=1;
#10;
W=4;En=1;
#10;
W=5;En=1;
#10;
W=6;En=1;
#10;
W=7;En=1;
#10;
W=8;En=1;
#10;
W=9;En=1;
#10;
W=10;En=1;
#10;
W=11;En=1;
#10;
W=12;En=1;
#10;
W=13;En=1;
#10;
W=14;En=1;
#10;
W=15;En=1;
#10;
end
endmodule
