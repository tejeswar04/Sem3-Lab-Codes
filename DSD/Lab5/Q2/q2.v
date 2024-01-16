`include "Mux8_1.v"
module q2(G,B);
input [3:0]G;
output [3:0]B;
wire [0:7]M3,M2,M1,M0;
assign M3=8'b00001111;
assign M2=8'b00111100;
assign M1=8'b01101001;
assign M0={G[0],(~G[0]),(~G[0]),G[0],(~G[0]),G[0],G[0],(~G[0])};
Mux8_1 Mu3(M3,G[3:1],B[3]);
Mux8_1 Mu2(M2,G[3:1],B[2]);
Mux8_1 Mu1(M1,G[3:1],B[1]);
Mux8_1 Mu0(M0,G[3:1],B[0]);
endmodule
