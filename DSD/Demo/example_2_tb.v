`timescale 1ns/1ns
`include "example_2.v"
module example_2_tb;
reg x1,x2,x3;
wire f;
example_2 e2(x1,x2,x3,f);
initial begin
	$dumpfile("example_2_tb.vcd");
	$dumpvars(0,example_2_tb);
	
	x1=0;
	x2=0;
	x3=0;
	#10;
	x1=0;
	x2=0;
	x3=1;
	#10;
	x1=0;
	x2=1;
	x3=0;
	#10;
	x1=0;
	x2=1;
	x3=1;
	#10;
	x1=1;
	x2=0;
	x3=0;
	#10;
	x1=1;
	x2=0;
	x3=1;
	#10;
	x1=1;
	x2=1;
	x3=0;
	#10;
	x1=1;
	x2=1;
	x3=1;
	#10;
	
	$display("Example_2_excuted");
end
endmodule
