module HW1(A, B, C, D, Sel, MuxOut);
output MuxOut;
input A;
input B;
input C;
input D;
input [1:0] Sel;

reg MuxOut;

always @(Sel) begin
	case(Sel)
		2'b00: MuxOut = A&B&C&D;
		2'b01: MuxOut = ~(A&B | C&D);
		2'b10: MuxOut = (~(A^B))&(~(C^D));
		2'b11: MuxOut = (A^B)^(C^D);
	endcase
end

endmodule

