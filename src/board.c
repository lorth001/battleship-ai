#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "board.h"


unsigned int *create_board(unsigned int rows, unsigned int cols) {
	unsigned int (*board)[cols] = malloc((cols * rows) * sizeof(*board));
	
	if (board == NULL) exit(1);
	for (uint8_t i = 0; i < rows; i++) {
		for (uint8_t j = 0; j < cols; j++) {
			board[i][j] = 1;
		}
	}

	return &board[0][0];
}

void print_board(uint8_t rows, uint8_t cols, unsigned int b[rows][cols]) {
	for (uint8_t i = 0; i < rows; i++) {
		for (uint8_t j = 0; j < cols; j++) {
			printf("%u ", b[i][j]);
		}
		printf("\n");
	}
}
