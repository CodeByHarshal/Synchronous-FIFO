module sync_fifo #(
    parameter WIDTH = 32,
    parameter DEPTH = 16
)(
    input wire clk,
    input wire rst,

    input wire wr_en,
    input wire rd_en,

    input wire [WIDTH-1:0] data_in,
    output reg [WIDTH-1:0] data_out,

    output wire full,
    output wire empty,
    output wire almost_full,
    output wire almost_empty
);

    // memory
    reg [WIDTH-1:0] mem [0:DEPTH-1];

    // pointers
    reg [$clog2(DEPTH)-1:0] wr_ptr;
    reg [$clog2(DEPTH)-1:0] rd_ptr;

    // fifo counter
    reg [$clog2(DEPTH):0] fifo_count;


    // WRITE LOGIC
    always @(posedge clk) begin
        if (rst)
            wr_ptr <= 0;

        else if (wr_en && !full) begin
            mem[wr_ptr] <= data_in;
            wr_ptr <= wr_ptr + 1;
        end
    end


    // READ LOGIC
    always @(posedge clk) begin
        if (rst)
            rd_ptr <= 0;

        else if (rd_en && !empty) begin
            data_out <= mem[rd_ptr];
            rd_ptr <= rd_ptr + 1;
        end
    end


    // FIFO COUNTER UPDATE
    always @(posedge clk) begin
        if (rst)
            fifo_count <= 0;

        else begin
            case ({wr_en && !full, rd_en && !empty})

                2'b10: fifo_count <= fifo_count + 1; // write only
                2'b01: fifo_count <= fifo_count - 1; // read only
                2'b11: fifo_count <= fifo_count;     // read + write same cycle
                default: fifo_count <= fifo_count;

            endcase
        end
    end


    // STATUS FLAGS
    assign full  = (fifo_count == DEPTH);
    assign empty = (fifo_count == 0);

    assign almost_full  = (fifo_count >= DEPTH-2);
    assign almost_empty = (fifo_count <= 1);

endmodule
