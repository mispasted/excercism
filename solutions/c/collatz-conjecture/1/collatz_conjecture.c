#include "collatz_conjecture.h"
  
int steps(int start){
    if (start < 1) 
        return ERROR_VALUE;
    
    int num_steps;
    for(num_steps = 0; start != 1; num_steps += 1)
        start = (start % 2 ) == 0 ? start / 2 : (start * 3) + 1;

    return num_steps;
}
  
  
  
  
  
  
  
  
  
  