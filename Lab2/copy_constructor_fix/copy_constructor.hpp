#include <iostream>
#include <cstring>

//This class manages dynamic memory
class Weapon
{
    public:

    //DEFAULT CONSTRUCTOR
    Weapon();

    //PARAMETERIZED CONSTRUCTOR
    Weapon(const char* _name, const float _damage);

    //COPY CONSTRUCTOR
    Weapon(const Weapon& source);

    //DESTRUCTOR
    ~Weapon();

    //DISPLAY
    void display() const;

    protected:
    char* name;
    float damage;
};

//This class manages dynamic memory
class InsectGlaive : public Weapon
{
    public:

    //DEFAULT CONSTRUCTOR
    InsectGlaive();

    //PARAMETERIZED CONSTRUCTOR
    InsectGlaive(const char* _name, const float _damage, const char* _enchantement);

    //COPY CONSTRUCTOR
    InsectGlaive(const InsectGlaive& source);

    //DESTRUCTOR
    ~InsectGlaive();

    //DISPLAY
    void display() const;

    private:
    char* enchantement;
};

//This class does not manage any dynamic memory
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
