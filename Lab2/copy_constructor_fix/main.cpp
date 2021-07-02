#include <iostream>
#include "copy_constructor.hpp"

/*
This program is a demonstration of copy constructors in a hierarchy, and when
one is needed.
*/

int main()
{
    InsectGlaive glaive("Electrorod", 775, "Blunt Boost");
    InsectGlaive glaiveCopy(glaive);

    glaiveCopy.display();

    ChargeBlade blade("Hydros Kardia", 972, 20.f);
    ChargeBlade bladeCopy(blade);

    bladeCopy.display();
}
