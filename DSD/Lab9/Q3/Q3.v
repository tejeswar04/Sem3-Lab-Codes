`include "tFlipFlop.v"
module Q3(clk,reset,c);
input clk,reset;
output [3:0]c;

tFlipFlop t1(1'b1,clk,reset,c[0]);
tFlipFlop t2(1'b1,c[0],reset,c[1]);
tFlipFlop t3(1'b1,c[1],reset,c[2]);
tFlipFlop t4(1'b1,c[2],reset,c[3]);

endmodule
