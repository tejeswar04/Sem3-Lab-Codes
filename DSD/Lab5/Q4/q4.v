`include "dec2to4.v"
module q4(W,f);
input [0:2]W;
output f;
wire [0:3]Y;
dec2to4 d(W[0:1],Y,1'b1);
assign f=((Y[0]&0)|(Y[1]&W[2])|(Y[2]&W[2])|(Y[3]&1));
endmodule

