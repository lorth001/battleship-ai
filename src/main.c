#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include "board.h"
#include "ai.h"


int main() {
	uint8_t rows = 10;
	uint8_t cols = 10;
	uint16_t (*gameboard)[cols] = (uint16_t (*)[cols])create_board(rows, cols, 1);
	uint16_t (*scoreboard)[cols] = (uint16_t (*)[cols])create_board(rows, cols, 0);

	gameboard[9][9] = 10;
	gameboard[8][9] = 10;
	//gameboard[5][6] = 6;
	//gameboard[5][7] = 0;

	extern Ship Carrier;
	extern Ship Battleship;
	extern Ship Submarine;
	extern Ship Destroyer;
	extern Ship PatrolBoat;

	Ship fleet[SHIP_COUNT] = { Carrier, Battleship, Submarine, Destroyer, PatrolBoat };
	//Ship fleet[SHIP_COUNT] = { Submarine };

	for (uint8_t ship = 0; ship < SHIP_COUNT; ship++) {
		Ship target_ship = fleet[ship];
		evaluate(rows, cols, gameboard, scoreboard, target_ship.size);
	}

	print_board(rows, cols, gameboard);
	printf("\n");
	print_board(rows, cols, scoreboard);

	free(gameboard);
	gameboard = NULL;
	free(scoreboard);
	scoreboard = NULL;

	return 0;
}
