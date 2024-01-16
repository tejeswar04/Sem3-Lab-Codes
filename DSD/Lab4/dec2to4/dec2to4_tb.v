`timescale 1ns/1ns
`include "dec2to4.v"
module dec2to4_tb;
reg [1:0]W;
reg En;
wire [0:3]Y;
dec2to4 d1(W,Y,En);
initial begin
$dumpfile("dec2to4_tb.vcd");
$dumpvars(0,dec2to4_tb);
En=1;W=2'b00;
#10;
En=1;W=2'b01;
#10;
En=1;W=2'b10;
#10;
En=1;W=2'b11;
#10;
En=0;W=2'b00;
#10;
En=0;W=2'b01;
#10;
En=0;W=2'b10;
#10;
En=0;W=2'b11;
#10;
end
endmodule
