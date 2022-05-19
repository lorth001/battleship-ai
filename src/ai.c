#include <stdio.h>
#include <stdint.h>
#include "board.h"


uint8_t probability(uint8_t rows, uint8_t cols, uint16_t gb[rows][cols]) {
	return 0;
}

void evaluate(uint8_t rows, uint8_t cols, uint16_t gb[rows][cols], uint16_t sb[rows][cols], uint8_t size) {
	for (uint8_t i = 0; i < rows; i++) {
		for (uint8_t j = 0; j < cols; j++) {
			uint16_t right = 1;
			uint16_t left = 1;
			uint16_t down = 1;
			uint16_t up = 1;
			for (uint16_t s = 0; s < size; s++) {
				// right
				if (j <= cols-size) {
					right *= gb[i][j+s];
					sb[i][j+s] += ((j <= cols-size) * 10) * right;
					sb[i][j+s] *= gb[i][j+s] % 10;
				}
				// left
				if (j >= size-1) {
					left *= gb[i][j-s];
					sb[i][j-s] += ((j >= size-1) * 10) * left;
					sb[i][j-s] *= gb[i][j-s] % 10;
				}
				// down
				if (i <= rows-size) {
					down *= gb[i+s][j];
					sb[i+s][j] += ((i <= rows-size) * 10) * down;
					sb[i+s][j] *= gb[i+s][j] % 10;
				}
				// up
				if (i >= size-1) {
					up *= gb[i-s][j];
					sb[i-s][j] += ((i >= size-1) * 10) * up;
					sb[i-s][j] *= gb[i-s][j] % 10;
				}
			}
		}
	}
}
