`include "d_FF.v"
module Q2(clk,reset,c);
input clk,reset;
output [4:0]c;

d_FF d1((~c[0]),clk,reset,c[4]);
d_FF d2(c[4],clk,reset,c[3]);
d_FF d3(c[3],clk,reset,c[2]);
d_FF d4(c[2],clk,reset,c[1]);
d_FF d5(c[1],clk,reset,c[0]);

endmodule

