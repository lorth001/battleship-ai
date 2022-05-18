#ifndef BOARD_H
#define BOARD_H

#include <stdint.h>

typedef struct {
	uint8_t rows;
	uint8_t cols;
	unsigned int data[];
} Board;

unsigned int *create_board(unsigned int rows, unsigned int cols);

void print_board(uint8_t rows, uint8_t cols, unsigned int b[rows][cols]);

#endif
