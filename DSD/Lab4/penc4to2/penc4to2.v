module penc4to2(W,Y,z);
input [3:0]W;
output reg [1:0]Y;
output reg z;
always @*
begin
z=1;
casex(W)
4'b1xxx:Y=2'b11;
4'b01xx:Y=2'b10;
4'b001x:Y=2'b01;
4'b0001:Y=2'b00;
default:begin
z=0;
Y=2'bxx;
end
endcase
end
endmodule

