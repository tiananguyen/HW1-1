#ifndef VAN_H
#define VAN_h

#include "automobile.h"

#include <iostream>

class Van : public Automobile
{
public:
    Van();

    Van(int seats, std::string imake, std::string imodel, int iyear, double iprice, int istall);

    int getSeats() {return seats;}

    bool park(bool lot[], int size);

private:
    int seats;
};


#endif
