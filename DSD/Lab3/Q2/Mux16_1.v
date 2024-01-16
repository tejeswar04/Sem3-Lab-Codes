`include "Mux8_1.v"
`include "Mux2_1.v"
module Mux16_1(W,S,f);
input [0:15]W;
input [3:0]S;
wire [0:1]t;
output f;
Mux8_1 M1(W[0:7],S[2:0],t[0]);
Mux8_1 M2(W[8:15],S[2:0],t[1]);
Mux2_1 M3(t,S[3],f);
endmodule

