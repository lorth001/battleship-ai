#ifndef BOARD_H
#define BOARD_H
#define SHIP_COUNT 5
#include <stdbool.h>


typedef struct Ship {
	int size;
	bool sunk;
} Ship;

int *create_board(int rows, int cols, int init_value);

int update_board(int x, int y, int val, int rows, int cols, int b[rows][cols]);

void print_board(int rows, int cols, int b[rows][cols]);


#endif
