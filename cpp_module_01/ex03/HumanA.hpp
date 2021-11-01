#ifndef HUMANA_HPP
#define HUMANA_HPP

#include "./Weapon.hpp"
#include <iostream>

class HumanA
{
public:

/* On ne peut pas faire un constructeur sans argument si on veut que la reference soit ok */
    //HumanA();
    HumanA(std::string name, Weapon &weapon);
    ~HumanA(void);

    void    attack(void);
    //void    setWeapon(Weapon &type);

private:
    std::string _name;
    /* Un pointeur peut etre null donc si on a pas forcement d'arme c'est qu'il faut un pointeur */
    Weapon  &_weapon;
};

#endif