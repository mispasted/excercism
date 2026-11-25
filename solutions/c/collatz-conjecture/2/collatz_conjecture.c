#include "collatz_conjecture.h"

// Modified to use bit-wise operations after viewing solution.
int steps(int start){
    if (start < 1) 
        return ERROR_VALUE;
    
    int num_steps;
    for(num_steps = 0; start != 1; num_steps += 1)
        start = !(start & 1) ? start >> 1 : (start * 3) + 1;

    return num_steps;
}
  
  
  
  
  
  
  
  
  
  