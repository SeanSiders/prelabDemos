#include <iostream>

#ifndef HIERARCHY_HPP
#define HIERARCHY_HPP

////// FORWARD DECLARATIONS
class base;
class derived;

////// GLOBAL OVERLOADS
std::ostream& operator<<(std::ostream& out, const base& rhs);
std::ostream& operator<<(std::ostream& out, const derived& rhs);

class base
{
    friend std::ostream& operator<<(std::ostream& out, const base& rhs);

    public:
    base& operator+=(const std::string& rhs);

    base();
    virtual ~base();

    protected:
    std::string b_str;
};

class derived : public base
{
    friend std::ostream& operator<<(std::ostream& out, const derived& rhs);

    public:
    base& operator+=(const std::string& rhs);

    derived();

    private:
    std::string d_str;
};

#endif
