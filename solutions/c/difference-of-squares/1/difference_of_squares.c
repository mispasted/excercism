#include "difference_of_squares.h"
#include <stdint.h>
/*
    I researched using ChatGPT-6.1 Terra. I found that:
    - The most efficient method of solving the difference of squares involves using "Faulhaber's Formula".
    - A derivation of the formula, using only elementry calculus, is found in Greg Orosi's "A Simple Derivation
     of Faulhaber's Formula" obtained here: Applied Mathematics E-Notes, Volume 18 (2018), Pages 124-126. 
     Link: https://www.math.nthu.edu.tw/~amen/ 
    - Using the formula itself is a little complicated, and therefore many of the integer powers have been 
     pre-calculated here: https://mathworld.wolfram.com/FaulhabersFormula.html
*/

unsigned int sum_of_squares(unsigned int number)
{
   // This is simply Faulhaber's Formula with p (power) = 2.
   return (number * (number + 1) * (2 * number + 1)) / 6;
}
unsigned int square_of_sum(unsigned int number) {
    // This is simply Faulhaber's Forumula with p (power) = 1, squared.
    int sum = (number * (number + 1)) / 2;
    return sum * sum;
}
unsigned int difference_of_squares(unsigned int number) {
    return square_of_sum(number) -  sum_of_squares(number);
}