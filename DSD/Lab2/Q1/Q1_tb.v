`timescale 1ns/1ns
`include "Q1.v"
module Q1_tb;
reg x1,x2,x3,x4;
wire f;
Q1 Q11(x1,x2,x3,x4,f);
initial begin
	$dumpfile("Q1_tb.vcd");
	$dumpvars(0,Q1_tb);
	x1=0;
	x2=0;
	x3=0;
	x4=0;
	#5; 
	x1=0;
	x2=0;
	x3=0;
	x4=1;
	#5; 
	x1=0;
	x2=0;
	x3=1;
	x4=0;
	#5; 
	x1=0;
	x2=0;
	x3=1;
	x4=1;
	#5; 
	x1=0;
	x2=1;
	x3=0;
	x4=0;
	#5; 
	x1=0;
	x2=1;
	x3=0;
	x4=1;
	#5; 
	x1=0;
	x2=1;
	x3=1;
	x4=0;
	#5; 
	x1=0;
	x2=1;
	x3=1;
	x4=1;
	#5; 
	x1=1;
	x2=0;
	x3=0;
	x4=0;
	#5; 
	x1=1;
	x2=0;
	x3=0;
	x4=1;
	#5; 
	x1=1;
	x2=0;
	x3=1;
	x4=0;
	#5; 
	x1=1;
	x2=0;
	x3=1;
	x4=1;
	#5; 
	x1=1;
	x2=1;
	x3=0;
	x4=0;
	#5; 
	x1=1;
	x2=1;
	x3=0;
	x4=1;
	#5; 
	x1=1;
	x2=1;
	x3=1;
	x4=0;
	#5; 
	x1=1;
	x2=1;
	x3=1;
	x4=1;
	#5;
	$display("Test Completed");
end
endmodule
