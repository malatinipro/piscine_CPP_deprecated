#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
    std::cout << "Default Frag Trap Constructor is being called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

//Il suffit de passer la src dans le constructeur du parent
FragTrap::FragTrap( const FragTrap & src ): ClapTrap(src)
{
	std::cout << "Copy constructor called" << std::endl;
    std::cout << "A new frag trap is born." << std::endl;

}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
    std::cout << "Frag Trap named constructor called" << std::endl;
    std::cout << "Frag Trap " << this->_name << " is born." << std::endl;
}


FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor called" << std::endl;
    std::cout << "FragTrap " << this->_name << " is being destructed." << std::endl;
    return ;
}

//On appelle symlement l'operateur d'assignation du parent puisqu'il n'y a rien a changer
FragTrap &  FragTrap::operator=( FragTrap const & rhs )
{
	ClapTrap::operator=(rhs);
	std::cout<< "FragTrap assignement operateur called" << std::endl;
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name << " is requesting a positive high fives !" << std::endl;
}

void	FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap " << this->_name << " attack " << target << " causing " << this->_attack_damage << " points of damage!" << std::endl;
}