#include "ScavTrap.hpp"

//Appel du constructeur du claptrap dans l'initilisation list
ScavTrap::ScavTrap(): ClapTrap()
{
    std::cout << "Default ScavTrap constructor is being called" << std::endl;
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	this->_gate_keeper_mode = false;
     std::cout << "A new scav trap is born." << std::endl;
    return ;
}

ScavTrap::ScavTrap( const ScavTrap & src ): ClapTrap(src)
{
	std::cout << "Copy constructor called" << std::endl;
    std::cout << "A new scav trap is born." << std::endl;
    return ;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
    this->_gate_keeper_mode = false;
	std::cout << "ScavTrap named constructor called" << std::endl;
    std::cout << "ScavTrap " << this->_name << " is born." << std::endl;
    return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scav Trap destructor called" << std::endl;
	std::cout << "ScavTrap " << this->_name << " is being destructed." << std::endl;
}

ScavTrap &  ScavTrap::operator=( ScavTrap const & rhs )
{
    //Necessaire d appeler l'operateur sur le parent au prealable
	ClapTrap::operator=(rhs);
	this->_gate_keeper_mode = rhs._gate_keeper_mode;
	std::cout<< "ScavTrap assignement operateur called" << std::endl;
	return *this;
}

void	ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << this->_name << " attack " << target << " causing " << this->_attack_damage << " points of damage!" << std::endl;
}

void	ScavTrap::guardGuate(void)
{
	if (this->_energy_points)
	{
		std::cout << "ScavTrap " << this->_name << " guarde keeper mode is now activated" << std::endl;
		this->_gate_keeper_mode = true;
	}
}