#include "van.h"
#include <iostream>

Van::Van() : Automobile()
 {
     seats = 0;
 }

Van::Van(int seats, std::string imake, std::string imodel, int iyear, double iprice, int istall) : Automobile(imake, imodel, iyear, iprice, istall)
 {
     if (seats <= 7)
         set_stall(1);
     else
         set_stall(2);
 }

bool Van::park(bool lot[], int size)
{
    if (stall() == 1)
        return Automobile::park(lot, size);
    else
    {
     int spot=size;
    for(int i=0; i<size-1; i++){
        if(!lot[i] && !lot[i+1])
            spot = i;
    }
    if(spot>=size)
       return false;
    else{
        lot[spot] = true;
        lot[spot + 1] = true;
        set_stall(spot);
        return true;
    }
    }
}
