#include "copy_constructor.hpp"

//////////////////////////////////////////////////////////////////////////// * WEAPON *

//DEFAULT CONSTRUCTOR
Weapon::Weapon() : name(nullptr), damage(0.f)
{
}

//PARAMETERIZED CONSTRUCTOR
Weapon::Weapon(const char* _name, const float _damage) : name(nullptr), damage(_damage)
{
    //Null check
    if (!_name) return;

    name = new char(strlen(_name) + 1);
    strcpy(name, _name);
}

//COPY CONSTRUCTOR
Weapon::Weapon(const Weapon& source) : name(nullptr), damage(source.damage)
{
    //Null check
    if (!source.name) return;

    name = new char[strlen(source.name) + 1];
    strcpy(name, source.name);
}

//DESTRUCTOR
Weapon::~Weapon()
{
    delete [] name;

    name = nullptr;
    damage = 0.f;
}

//DISPLAY
void Weapon::display() const
{
    std::cout << "\n\nNAME : " << name << '\n' << "DAMAGE : " << damage;
}

//////////////////////////////////////////////////////////////////////////// * INSECT GLAIVE *

//DEFAULT CONSTRUCTOR
InsectGlaive::InsectGlaive() : enchantement(nullptr)
{
}

//PARAMETERIZED CONSTRUCTOR
InsectGlaive::InsectGlaive(const char* _name, const float _damage, const char* _enchantement) :
    Weapon(_name, _damage), enchantement(nullptr)
{
    //Null check
    if (!_enchantement) return;

    enchantement = new char[strlen(_enchantement) + 1];
    strcpy(enchantement, _enchantement);
}

//COPY CONSTRUCTOR
InsectGlaive::InsectGlaive(const InsectGlaive& source) : enchantement(nullptr)
{
    //Null check
    if (!source.enchantement) return;

    enchantement = new char[strlen(source.enchantement) + 1];
    strcpy(enchantement, source.enchantement);
}

//DESTRUCTOR
InsectGlaive::~InsectGlaive()
{
    delete [] enchantement;
    enchantement = nullptr;
}

//DISPLAY
void InsectGlaive::display() const
{
    //Call the parent's display
    Weapon::display();

    std::cout << "\nENCHANTEMENT : " << enchantement << "\n\n";
}

//////////////////////////////////////////////////////////////////////////// * CHARGE BLADE *

//DEFAULT CONSTRUCTOR
ChargeBlade::ChargeBlade() : sharpness(0.f)
{
}

//PARAMETERIZED CONSTRUCTOR
ChargeBlade::ChargeBlade(const char* _name, const float _damage, const float _sharpness) :
    Weapon(_name, _damage), sharpness(_sharpness)
{
}

//DISPLAY
void ChargeBlade::display() const
{
    //Call the parent's display
    Weapon::display();

    std::cout << "\nSHARPNESS : " << sharpness << "\n\n";
}
