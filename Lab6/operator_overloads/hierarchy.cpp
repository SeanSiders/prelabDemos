#include "hierarchy.hpp"

//////////////// CONSTRUCTORS
base::base() : b_str("BASE")
{
}

derived::derived() : d_str("DERIVED")
{
}

base::~base()
{
}

//////////////// GLOBAL OPERATOR OVERLOADS 

std::ostream& operator<<(std::ostream& out, const base& rhs)
{
    out << rhs.b_str << "\n\n";
    return out;
}

std::ostream& operator<<(std::ostream& out, const derived& rhs)
{
    out << rhs.d_str << "\n\n";
    return out;
}

base& base::operator+=(const std::string& rhs)
{
    b_str += rhs;

    return *this;
}

base& derived::operator+=(const std::string& rhs)
{
    d_str += rhs;

    return *this;
}
