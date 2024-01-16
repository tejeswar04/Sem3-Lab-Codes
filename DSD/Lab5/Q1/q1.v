module FourtoOne(W,S,f);
input [0:3]W;
input [1:0]S;
output reg f;
always @*
begin
if(S==0)
	f=W[0];
else if (S==1)
	f=W[1];
else if (S==2)
	f=W[2];
else
	f=W[3];
end
endmodule

module q1(W,f);
input [0:3]W;
output f;
wire [0:3]M;
assign M[0]=~(W[2]&W[3]);
assign M[2]=((~(W[2]))&(W[3]));
assign M[1]=~(W[3]);
assign M[3]=~(W[3]);
FourtoOne w1 (M,W[0:1],f);
endmodule
