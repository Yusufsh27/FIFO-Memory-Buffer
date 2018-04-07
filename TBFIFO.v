`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:43:57 11/20/2016
// Design Name:   FIFO
// Module Name:   C:/Users/sani/Dropbox/School/College/4.Senior/First Semester/CompE470/Homeowrks/HomeWork4/TBFIFO.v
// Project Name:  HomeWork4
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FIFO
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module TBFIFO;

	// Inputs
	reg clk;
	reg n_rst;
	reg write_rq;
	reg read_rq;
	reg [7:0] data_in;

	// Outputs
	wire full;
	wire almost_full;
	wire empty;
	wire almost_empty;
	wire [7:0] data_out;

	// Instantiate the Unit Under Test (UUT)
	FIFO #(.WL(8), .DEPTH(8)) uut (
		.clk(clk), 
		.n_rst(n_rst), 
		.write_rq(write_rq), 
		.read_rq(read_rq), 
		.data_in(data_in), 
		.full(full), 
		.empty(empty), 
		.almost_full(almost_full), 
		.almost_empty(almost_empty), 
		.data_out(data_out)
	);
	
	parameter clockperiod = 10;
	initial clk = 0;
	always #(clockperiod/2) clk = ~clk;

	initial begin
			 n_rst = 1'b0; read_rq = 1'b0; write_rq = 1'b1;
			 @(posedge clk)
			 @(posedge clk)data_in = 0;n_rst = 1'b1;
			 @(posedge clk)data_in = 1;
			 @(posedge clk)data_in = 2;
			 @(posedge clk)write_rq = 1'b0;read_rq = 1'b1;
			 @(posedge clk)data_in = 3;read_rq = 1'b1; write_rq = 1'b1;
			 @(posedge clk)write_rq = 1'b0;read_rq = 1'b1;
			 @(posedge clk)
			 @(posedge clk)data_in =25;read_rq = 1'b0; write_rq = 1'b1;
			 @(posedge clk)write_rq = 1'b0;read_rq = 1'b1;
			 @(posedge clk)
			 @(posedge clk) read_rq = 1'b0; write_rq = 1'b0;
			 @(posedge clk) $finish;
	end
      
endmodule

