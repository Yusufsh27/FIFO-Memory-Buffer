`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    19:34:59 11/18/2016 
// Design Name: 
// Module Name:    FIFO 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
 module FIFO #(parameter WL = 8, DEPTH = 8) 
				(input clk,
				input n_rst,
				input write_rq,
				input read_rq,
				input [WL-1:0] data_in,
				output reg full,
				output reg empty,
				output reg almost_full,
				output reg almost_empty,
				output reg [WL-1:0] data_out);    
 
 //DEPTH is size of Memory Array
 
 //-----------Internal variables-------------------
 
 reg [DEPTH-1:0] write_addr;
 reg [DEPTH-1:0] read_addr;
 reg [DEPTH-1:0] MemSpot;
 reg [(WL-1):0] MemArr [DEPTH-1:0];
 
 
 
	//---------------------------------------------------------------// Setting up the Flags
	always @(*) begin
		full = (MemSpot == DEPTH) ? 1 : 0;
		empty = (MemSpot == 0) ? 1 : 0;
		almost_full = (MemSpot == (DEPTH-1)) ? 1 : 0;
		almost_empty = (MemSpot == 1) ? 1 : 0;	
	end

	//---------------------------------------------------------------// Read Control Logic
	always @(posedge clk or negedge n_rst) begin
		if (!n_rst) begin
		  read_addr <= 1'b0;
		  data_out <= 1'b0;
		end 
		else if (read_rq && ~empty) begin
		  data_out <= MemArr[read_addr]; 
		  read_addr <= read_addr + 1;
		  MemSpot <= MemSpot - 1;
		end
	end
	
	//---------------------------------------------------------------// Write Control Logic
	always @(posedge clk or negedge n_rst) begin
		if (!n_rst) begin
		  write_addr <= 1'b0;
		end 
		else if ((write_rq && ~full)) begin
			MemArr[write_addr] <= data_in; 
			write_addr <= write_addr + 1;
			MemSpot <= MemSpot + 1;
		end
	end
	
	//---------------------------------------------------------------// Write & Read Control Logic
	always @(posedge clk or negedge n_rst) begin
		if (!n_rst) begin
		  MemSpot <=1'b0;
		  empty <= 1'b1;
		  full <= 1'b0;
		  almost_full <= 1'b0;
		  almost_empty <= 1'b0;
		end 
		else if ((write_rq && ~full) && (read_rq && ~empty)) begin
			data_out <= MemArr[read_addr]; 
		   read_addr <= read_addr + 1;
			MemArr[write_addr] <= data_in; 
			write_addr <= write_addr + 1;
			MemSpot <= MemSpot + 1;
		end
	end

endmodule
