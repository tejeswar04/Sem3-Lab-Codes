module Mux2_1(W,s,f);
input [0:1]W;
input s;
output reg f;
always @(W or s)
f=s?W[1]:W[0];
endmodule
