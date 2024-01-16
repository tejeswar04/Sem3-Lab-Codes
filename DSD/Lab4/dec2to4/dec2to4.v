module dec2to4(W,Y,En);
input [1:0]W;
input En;
output reg [0:3]Y;
always@*
begin
if(En==1)
begin
if(W==0)
Y=4'b1000;
else if(W==1)
Y=4'b0100;
else if(W==2)
Y=4'b0010;
else
Y=4'b0001;
end
else
Y=4'b0000;
end
endmodule
