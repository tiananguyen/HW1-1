#ifndef PICKUP_H
#define PICKUP_H

#include "automobile.h"

#include <iostream>

class Pickup : public Automobile
{
    public:
        Pickup();

        Pickup(int hauling, bool c, std::string imake, std::string imodel, int iyear, double iprice, int istall);

        int getHaulingCap() {return haulingCap;}

        bool getCab() {return cab;}

        bool park(bool lot[], int size);


private:
    int haulingCap;
    bool cab;
};

#endif
