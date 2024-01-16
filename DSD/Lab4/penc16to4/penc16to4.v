module penc16to4(W,Y,z);
input [15:0]W;
output reg [3:0]Y;
output reg z;
integer i;
always @*
begin
z=0;
Y=4'bxxxx;
for(i=15;i>=0;i=i-1)
begin
if((W[i]==1))
begin
if(z==0)
begin
Y=i;
z=1;
end
end
end
end
endmodule
