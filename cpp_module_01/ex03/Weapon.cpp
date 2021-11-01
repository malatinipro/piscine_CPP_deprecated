#include "./Weapon.hpp"

/* Initialisation list, constructeur avec pamatres */
Weapon::Weapon(std::string const & type): _type(type)
{
    return;
}

Weapon::~Weapon(void)
{
    return ;
}

/* Fonction getType demandee dans le sujet
** Getter 
*/
std::string const &Weapon::getType(void) const
{
    return (this->_type);
}

/* Setter equivalent */
void    Weapon::setType(std::string const &type)
{
    this->_type = type;
}