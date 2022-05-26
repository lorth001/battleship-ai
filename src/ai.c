#include <stdio.h>
#include "board.h"


int probability(int rows, int cols, int gb[rows][cols]) {
	return 0;
}

void evaluate(int rows, int cols, int gb[rows][cols], int sb[rows][cols], int size) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			int right = 1;
			int left = 1;
			int down = 1;
			int up = 1;
			for (int s = 0; s < size; s++) {
				// right
				if (j <= cols-size) {
					right *= gb[i][j+s];
					sb[i][j+s] += ((j <= cols-size) * 2) * right;
					sb[i][j+s] *= gb[i][j+s] % 2;
				}
				// left
				if (j >= size-1) {
					left *= gb[i][j-s];
					sb[i][j-s] += ((j >= size-1) * 2) * left;
					sb[i][j-s] *= gb[i][j-s] % 2;
				}
				// down
				if (i <= rows-size) {
					down *= gb[i+s][j];
					sb[i+s][j] += ((i <= rows-size) * 2) * down;
					sb[i+s][j] *= gb[i+s][j] % 2;
				}
				// up
				if (i >= size-1) {
					up *= gb[i-s][j];
					sb[i-s][j] += ((i >= size-1) * 2) * up;
					sb[i-s][j] *= gb[i-s][j] % 2;
				}
			}
		}
	}
}
