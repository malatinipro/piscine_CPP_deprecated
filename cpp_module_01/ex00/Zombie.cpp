#include "./Zombie.hpp"

/* Obligee de faire les constructeurs vides sinon ca ne compile pas */
Zombie::Zombie(void)
{
    return ;
}

/* On aura pu aussi utiliser une initialization list */
Zombie::Zombie(std::string name)
{
    this->_name = name;
    return ;
}

/* Description du destructeur - Ne pas oublier le tilde !*/
Zombie::~Zombie(void)
{
    /* Debugging message asked */
    std::cout << this->_name << " has been destroyed" << std::endl; 
}

/* Setter name */
void    Zombie::setter_name(std::string name)
{
    this->_name = name;
}

std::string    Zombie::getter_name(void) const
{
    return (this->_name);
}

/* Fonction membre announce demandee */
/* Const est une bonne pratique qui permet d'indiquer que l'instance ne sera pas modifiee */
void    Zombie::announce(void) const
{
    std::string name = this->getter_name();
    std::cout << name << " " << "BraiiiiiiinnnzzzZ..." << std::endl;
}