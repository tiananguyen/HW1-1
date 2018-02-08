#include <iostream>
#include "automobile.h"
#include "pickup.h"
#include "van.h"

int main()
{
    Automobile car1;
    Pickup myPickup;
    Van van1;
    bool spaces[5];

    bool b = car1.park(spaces, 5);
    std::cout << b << std::endl;

    bool c = myPickup.park(spaces, 5);
    std::cout << c << std::endl;

    bool d = van1.park(spaces, 5);
    std::cout << d << std::endl;

    return 0;
}
