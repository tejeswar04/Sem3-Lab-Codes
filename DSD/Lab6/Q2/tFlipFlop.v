module tFlipFlop(t,clk,reset,q);
input t,clk,reset;
output reg q;
always@(negedge clk or reset)
begin
if(reset)
q<=0;

else if(t)
q<=~q;

end
endmodule
