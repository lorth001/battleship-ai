#ifndef AI_H
#define AI_H
#include <stdint.h>


uint8_t probability(uint8_t rows, uint8_t cols, uint16_t gb[rows][cols]);

void evaluate(uint8_t rows, uint8_t cols, uint16_t gb[rows][cols], uint16_t sb[rows][cols], uint8_t size);


#endif
