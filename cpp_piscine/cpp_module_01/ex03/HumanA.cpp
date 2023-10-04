#include "HumanA.hpp"

/* On est oblige de passer par une initialisation list pour que la reference ne pose pas de pb */
HumanA::HumanA(std::string name, Weapon &weapon) : _name(name), _weapon(weapon)
{   
    return ;
}

/* Destructeur */
HumanA::~HumanA(void) {
	return ;
}

void    HumanA::attack(void)
{
    /* Ici on met un point et pas une fleche car il s agit d un pointeur */
    std::cout << _name << " attacks with his " << this->_weapon.getType() << std::endl;
}