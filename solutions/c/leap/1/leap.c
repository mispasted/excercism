#include "leap.h"
bool leap_year(int year) 
{   // Divisable by 100, but not 400  
    if ( year % 400 != 0 && year % 100 == 0 )
        return  false;
    // Divisible by 4 (includes 400)
    else if ( year % 4 == 0 )
        return true;
    // No special case
    else
        return false;
}