`include "D_FF.v"
module reg6(Q,clk,A);
input Q,clk;
output A;
wire [5:1]I;
D_FF d1(Q,clk,I[5],1'b0);
D_FF d2(I[5],clk,I[4],1'b0);
D_FF d3(I[4],clk,I[3],1'b0);
D_FF d4(I[3],clk,I[2],1'b0);
D_FF d5(I[2],clk,I[1],1'b0);
D_FF d6(I[1],clk,A,1'b0);
endmodule
