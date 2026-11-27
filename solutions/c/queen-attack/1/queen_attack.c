#include "queen_attack.h"
#include <math.h>
#include <stdio.h>

attack_status_t can_attack(position_t queen_1, position_t queen_2) {
    
    int invalid_position = queen_1.row > 7 || queen_1.column > 7 ||  // Not on the board
                           queen_2.row > 7 || queen_2.column > 7 ||
                           (queen_1.row == queen_2.row && queen_1.column == queen_2.column); // Same square
    if (invalid_position)
        return INVALID_POSITION;

    float slope = (float)(queen_1.row - queen_2.row) / (queen_1.column - queen_2.column);
   
    int can_attack = isinf(slope) || slope == 0 || slope == -1 || slope == 1;
    if (can_attack)
        return CAN_ATTACK;
    else
        return CAN_NOT_ATTACK;
}