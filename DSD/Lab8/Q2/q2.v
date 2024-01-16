`include "tFlipFlop.v"
module q2(x,A,clk,reset);
input x,clk,reset;
output [1:0]A;
wire [1:0]t;
assign t[1]=(A[0]&(~x))|((~A[1])&A[0]);
assign t[0]=(A[1]&(~x))|((~A[0])&(~x))|((~A[1])&(A[0])&x);
tFlipFlop t1(t[1],clk,reset,A[1]);
tFlipFlop t2(t[0],clk,reset,A[0]);
endmodule
