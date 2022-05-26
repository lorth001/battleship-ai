#include <stdio.h>
#include <stdlib.h>
#include "board.h"


Ship Carrier = { .size = 5, .sunk = false };
Ship Battleship = { .size = 4, .sunk = false };
Ship Submarine = { .size = 3, .sunk = false };
Ship Destroyer = { .size = 3, .sunk = false };
Ship PatrolBoat = { .size = 2, .sunk = false };

int *create_board(int rows, int cols, int init_value) {
	int (*board)[cols] = malloc((cols * rows) * sizeof(*board));
	if (board == NULL) exit(1);

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			board[i][j] = init_value;
		}
	}
	return &board[0][0];
}

int update_board(int x, int y, int val, int rows, int cols, int b[rows][cols]) {
	if (x < rows && y < cols) {
		b[x][y] = val;
		return 0;
	}
	return 1;
}

void print_board(int rows, int cols, int b[rows][cols]) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			printf("%5u", b[i][j]);
		}
		printf("\n");
	}
}
