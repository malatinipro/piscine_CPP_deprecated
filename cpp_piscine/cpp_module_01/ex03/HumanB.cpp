#include "HumanB.hpp"

/* Constructeur avec argument et initialization list */
HumanB::HumanB(std::string name) : _name(name)
{
    return ;
}

/* Destructeur */
HumanB::~HumanB(void) {
	return ;
}

void    HumanB::attack(void)
{
    std::cout << _name << " attacks with his " << this->_weapon->getType() << std::endl;
}

void    HumanB::setWeapon(Weapon &type)
{
    this->_weapon = &type;
}