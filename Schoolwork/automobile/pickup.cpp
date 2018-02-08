#include "pickup.h"
#include <iostream>

Pickup::Pickup() : Automobile()
{
    haulingCap = 0;
    cab = false;

}

Pickup::Pickup(int hauling, bool c, std::string imake, std::string imodel, int iyear, double iprice, int istall) : Automobile(imake, imodel, iyear, iprice, istall)
{
    haulingCap = hauling;
    cab = c;
}

bool Pickup::park(bool lot[], int size)
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
