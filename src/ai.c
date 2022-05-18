#include <stdio.h>
#include <stdint.h>
#include "board.h"


uint8_t probability(uint8_t rows, uint8_t cols, uint16_t gb[rows][cols]) {
	return 0;
}

void evaluate(uint8_t rows, uint8_t cols, uint16_t gb[rows][cols], uint16_t sb[rows][cols], uint8_t size) {
	for (uint8_t i = 0; i < rows; i++) {
		for (uint8_t j = 0; j < cols; j++) {
			uint8_t horizontal = 1;
			uint8_t vertical = 1;

			for (uint8_t s = 0; s < size; s++) {
				horizontal &= (j <= cols-size) & gb[i][j+s];
				vertical &= (i <= rows-size) & gb[i+s][j];
				sb[i][j+s] += (j <= cols-size) & horizontal;
				sb[i+s][j] += (i <= rows-size) & vertical;
			}
		}
	}
}
