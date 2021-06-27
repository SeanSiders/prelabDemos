#include <iostream>

/*
This program is a demonstration of initialization lists, and how to properly
invoke the desired parent constructor from one.

For the sake of simplicity, member function implementations are in the class
interface. This is not advisable for programming assignments but is valid C++.
*/

class Base
{
    public:

    //Default Constructor
    Base() : str("Porter Robinson is NOT my friend") //Sets a default value to the contained "str"
    {
    }

    //Parameterized Constructor
    Base(const std::string& strSource) : str(strSource) //Copies "strSource" into the contained "str"
    {
    }

    void display() const
    {
        std::cout << str << "\n\n";
    }

    protected:
    //CONSTANT MEMBER
    //--Note that the only time to set the data of a const member is in an initialization list
    const std::string str;
};

class Derived : public Base
{
    public:

    //Default Constructor
    Derived()
    {
    }

    //Parameterized Constructor
    //The default constructor of Base will be called unless another is explicitly invoked in the initialization list
    Derived(const std::string& strSource)
    {
    }
};

int main()
{
    //Which "Base" constructor will be invoked?
    //Base::Base or Base::Base(const std::string&)
    Derived derived_object("Porter Robinson is my friend :)");

    //What will display?
    derived_object.display();

    //Now YOU implement a solution!
    //How do we make Porter Robinson my friend?
    //Hint : can you use an initialization list to make this happen?

    return 0;
}
