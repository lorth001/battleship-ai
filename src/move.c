#include "board.h"


int hit(int x, int y, int rows, int cols, int b[rows][cols]) {
	return update_board(x, y, 10, rows, cols, b);
}

int miss(int x, int y, int rows, int cols, int b[rows][cols]) {
	return update_board(x, y, 0, rows, cols, b);
}

int sunk(int x1, int y1, int x2, int y2, int rows, int cols, int b[rows][cols]) {
	if (x1 == x2) {
		for (int i = 0; i < y2-y1; i++) {
			b[x1][y1+i] = 0;
		}
		return 0;
	}
	if (y1 == y2) {
		for (int i = 0; i < x2-x1; i++) {
			b[x1+i][y1] = 0;
		}
		return 0;
	}
	return 1;
}
