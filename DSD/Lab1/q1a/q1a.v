module q1a(x1,x2,x3,x4,f);
input x1,x2,x3,x4;
output f;
assign f=x3|(x1&x4);
endmodule
