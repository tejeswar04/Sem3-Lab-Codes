module example_1(x1,x2,x3,f);
	input x1,x2,x3;
	output f;
	and(g,x1,x2);
	and(h,~x2,x3);
	or(f,g,h);
endmodule
