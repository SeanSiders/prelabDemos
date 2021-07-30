#include <iostream>
#include "hierarchy.hpp"

int main()
{
    //1) Which string will display : base or derived?
    base* b = new derived;

    std::cout << *b;
    std::cin.get();

    //2) How can we access the derived operator<< overload?

    //3) Which string will "APPEND" be added to : base or derived?
    //   What will determine this outcome?
    *b += " APPEND";

    std::cout << *b;
    std::cin.get();

    delete b;

    return 0;
}
