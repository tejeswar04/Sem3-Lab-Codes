module R_4(reset,clk,c);
input reset,clk;
output [3:0]c;
reg [3:0]t;
always@(posedge(clk) or reset)
begin
if(reset)
	t=4'b1000;
else
begin
	t={t[0],t[3:1]};
end
end
assign c=t;
endmodule
