#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "./Weapon.hpp"
#include <iostream>

class HumanB
{
public:
    HumanB(std::string name);
    ~HumanB(void);

    void    attack(void);
    /* Le weapon doit etre une adresse donc on a pas le choix que de passer une adresse */
    void    setWeapon(Weapon &type);

private:
    std::string _name;
    /* Un pointeur peut etre null donc si on a pas forcement d'arme c'est qu'il faut un pointeur */
    Weapon  *_weapon;
};

#endif