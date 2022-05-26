#ifndef TEST_H
#define TEST_H

#include "board.h"
#include "ai.h"


// Gets user input as dynamic char array and returns its pointer (needs to be freed)
char *user_input();

// Gets an int from the user
int get_int_from_user();

// The program's UI that handles the menu and logic
void prompt();

#endif
