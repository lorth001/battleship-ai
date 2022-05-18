#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "board.h"

#define BOARD_WIDTH 10
#define BOARD_HEIGHT 10


int main() {
	uint8_t rows = 10;
	uint8_t cols = 10;
	unsigned int (*board)[cols] = (unsigned int (*)[cols])create_board(rows, cols);
	print_board(rows, cols, board);
	free(board);

	return 0;
}
