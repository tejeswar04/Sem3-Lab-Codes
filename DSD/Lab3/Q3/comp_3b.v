module comp_3b(A,B,eq,gt,lt);
input [2:0]A,B;
output reg eq,gt,lt;
reg [2:0]i;
integer j;
always@(*)
begin
for(j=0;j<3;j=j+1)
	i[j]=~(A[j]^B[j]);
eq=(i[0]&i[1]&i[2]);
gt=((A[2]&(~B[2]))|(i[2]&A[1]&(~B[1]))|(i[2]&i[1]&A[0]&(~B[0])));
lt=~(eq|gt);
end
endmodule
