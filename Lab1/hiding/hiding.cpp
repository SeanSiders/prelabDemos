#include <iostream>

/*
This program is a demonstration of member function "hiding" in a hierarchy.
"hiding" occurs whenever the member function name of a parent class is exactly
the same as a derived class' function name. A key thing to note is that this
is even true for member functions that have different arguments, as long as
the name matches, "hiding" will occur.

For the sake of simplicity, member function implementations are in the class
interface. This is not advisable for programming assignments but is valid C++.
*/

class Base
{
    public:

    //Default Constructor
    Base()
    {
    }

    void display() const
    {
        std::cout << "BASE DISPLAY\n\n";
    }

    void display(const std::string& strToDisplay) const
    {
        std::cout << "BASE DISPLAY : " << strToDisplay << "\n\n";
    }
};

class Derived : public Base
{
    public:

    //Default Constructor
    Derived()
    {
    }

    void display() const
    {
        std::cout << "DERIVED DISPLAY\n\n";
    }
};

int main()
{
    Derived derived_object;

    //1) Which will display with no arg?
    // -- Base::display or Derived::display
    //derived_object.display(); //UNCOMMENT THEN COMPILE

    //2) What will happen WITH an arg?
    // -- Base::display(const std::string&) or something else...
    //derived_object.display("I like EDM"); // UNCOMMENT THEN COMPILE

    //3) Now YOU implement a solution! 
    //You must effectively "un-hide" the functions that match the name from "Derived"
    //Hint : this can be done by modifying line 59, don't just make a Base object because that is the easy way out

    return 0;
}
