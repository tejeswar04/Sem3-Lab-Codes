`include "dec4to16.v"
module q3(W,f);
input [3:0]W;
output f;
wire [0:15]Y;
dec4to16 d(W,Y,1'b1);
assign f=(Y[1]|Y[4]|Y[6]|Y[8]|Y[9]|Y[13]|Y[15]);
endmodule
