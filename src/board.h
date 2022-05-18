#ifndef BOARD_H
#define BOARD_H
#define SHIP_COUNT 5
#include <stdint.h>
#include <stdbool.h>


typedef struct Ship {
	uint8_t size;
	bool sunk;
} Ship;

uint16_t *create_board(uint8_t rows, uint8_t cols, uint8_t init_value);

void print_board(uint8_t rows, uint8_t cols, uint16_t b[rows][cols]);


#endif
