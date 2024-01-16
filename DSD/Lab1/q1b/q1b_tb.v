`timescale 1ns/1ns
`include "q1b.v"
module q1b_tb;
reg x1,x2,x3,x4;
wire f;
q1b q1b1(x1,x2,x3,x4,f);
initial begin
	$dumpfile("q1b_tb.vcd");
	$dumpvars(0,q1b_tb);
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
