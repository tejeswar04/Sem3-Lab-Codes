module Mux8_1(W,S,f);
input [0:7]W;
input [2:0]S;
output reg f;
always @*
	begin
	case(S)
	0:f=W[0];
	1:f=W[1];
	2:f=W[2];
	3:f=W[3];
	4:f=W[4];
	5:f=W[5];
	6:f=W[6];
	7:f=W[7];
	endcase
	end
endmodule
