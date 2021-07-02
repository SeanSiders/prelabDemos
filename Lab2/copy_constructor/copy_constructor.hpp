#include <iostream>
#include <cstring>

//This class manages dynamic memory
//Is a copy constructor needed?
class Weapon
{
    public:

    //DEFAULT CONSTRUCTOR
    Weapon();

    //PARAMETERIZED CONSTRUCTOR
    Weapon(const char* _name, const float _damage);

    //DESTRUCTOR
    ~Weapon();

    //DISPLAY
    void display() const;

    protected:
    char* name;
    float damage;
};

//This class manages dynamic memory
//Is a copy constructor needed?
class InsectGlaive : public Weapon
{
    public:

    //DEFAULT CONSTRUCTOR
    InsectGlaive();

    //PARAMETERIZED CONSTRUCTOR
    InsectGlaive(const char* _name, const float _damage, const char* _enchantement);

    //DESTRUCTOR
    ~InsectGlaive();

    //DISPLAY
    void display() const;

    private:
    char* enchantement;
};

//This class does not manage any dynamic memory
//Is a copy constructor needed?
class ChargeBlade : public Weapon
{
    public:

    //DEFAULT CONSTRUCTOR
    ChargeBlade();

    //PARAMETERIZED CONSTRUCTOR
    ChargeBlade(const char* _name, const float _damage, const float _sharpness);

    //DISPLAY
    void display() const;

    private:
    float sharpness;
};
