#include <stdio.h>
#include <stdlib.h>
#include "board.h"
#include "ai.h"


int main() {
	int rows = 10;
	int cols = 10;
	int (*gameboard)[cols] = (int (*)[cols])create_board(rows, cols, 1);
	int (*scoreboard)[cols] = (int (*)[cols])create_board(rows, cols, 0);

	gameboard[9][9] = 10;
	gameboard[8][9] = 10;
	gameboard[7][9] = 10;
	gameboard[6][9] = 10;
	//gameboard[5][9] = 0;
	//gameboard[8][9] = 100;
	//gameboard[7][9] = 100;
	//gameboard[6][9] = 100;
	//gameboard[5][9] = 100;
	//gameboard[17][19] = 2;
	//gameboard[5][6] = 6;
	//gameboard[5][7] = 0;

	extern Ship Carrier;
	extern Ship Battleship;
	extern Ship Submarine;
	extern Ship Destroyer;
	extern Ship PatrolBoat;

	Ship fleet[SHIP_COUNT] = { Carrier, Battleship, Submarine, Destroyer, PatrolBoat };
	//Ship fleet[SHIP_COUNT] = { Submarine };

	for (int ship = 0; ship < SHIP_COUNT; ship++) {
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
