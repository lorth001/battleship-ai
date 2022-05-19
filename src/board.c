#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "board.h"


Ship Carrier = { .size = 5, .sunk = false };
Ship Battleship = { .size = 4, .sunk = false };
Ship Submarine = { .size = 3, .sunk = false };
Ship Destroyer = { .size = 3, .sunk = false };
Ship PatrolBoat = { .size = 2, .sunk = false };

uint16_t *create_board(uint8_t rows, uint8_t cols, uint8_t init_value) {
	uint16_t (*board)[cols] = malloc((cols * rows) * sizeof(*board));
	if (board == NULL) exit(1);

	for (uint8_t i = 0; i < rows; i++) {
		for (uint8_t j = 0; j < cols; j++) {
			board[i][j] = init_value;
		}
	}
	return &board[0][0];
}

void print_board(uint8_t rows, uint8_t cols, uint16_t b[rows][cols]) {
	for (uint8_t i = 0; i < rows; i++) {
		for (uint8_t j = 0; j < cols; j++) {
			printf("%5u", b[i][j]);
		}
		printf("\n");
	}
}
