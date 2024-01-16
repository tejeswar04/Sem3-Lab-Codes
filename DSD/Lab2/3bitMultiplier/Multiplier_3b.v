`include "FAdder.v"
module Multiplier_3b(A,B,P);
input [2:0]A,B;
output [5:0]P;
wire [6:0]C;
assign P[0]=(A[0]&B[0]);
FAdder F1((A[1]&B[0]),((A[0]&B[1])),(1'b0),P[1],C[0]);
FAdder F2((A[2]&B[0]),((A[1]&B[1])),C[0],C[1],C[2]);
FAdder F3((A[2]&B[1]),(1'b0),C[2],C[3],C[4]);
FAdder F4((A[0]&B[2]),C[1],(1'b0),P[2],C[5]);
FAdder F5((A[1]&B[2]),C[3],C[5],P[3],C[6]);
FAdder F6((A[2]&B[2]),C[4],C[6],P[4],P[5]);
endmodule
