#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void): _name("null"), _hit_points(10), _energy_points(10), _attack_damage(0)
{
    std::cout << "ClapTrap Default constructor called" << std::endl;
    std::cout << "A ClapTrap with no name is born." << std::endl;
    return ;
}

ClapTrap::ClapTrap(ClapTrap const &src)
{
    std::cout << "ClapTrap Copy constructor from Clap Trap called" << std::endl;
    *this = src;
    return ;
}

ClapTrap::ClapTrap(std::string name)
{
    std::cout << "ClapTrap named parameter constructor called" << std::endl;
    this->_name = name;
    this->_energy_points = 10;
    this->_hit_points = 10;
    this->_attack_damage = 0;
    std::cout << "ClapTrap " << this->_name << " is born." << std::endl;
    return ;
}

ClapTrap::~ClapTrap(void)
{
    std::cout << "ClapTtrap Destructor called" << std::endl;
    std::cout << "ClapTrap " << this->_name << " is being destructed." << std::endl;
    return ;
}

//toujours retourner *this - reference sur this
ClapTrap &ClapTrap::operator=(ClapTrap const &rhs)
{
    std::cout << "ClapTrap Assignation operator called" << std::endl;
    this->_name = rhs._name;
    this->_hit_points = rhs._hit_points;
    this->_energy_points = rhs._energy_points;
    this->_attack_damage = rhs._attack_damage;
    return (*this);
}

//Message repris du sujet
void    ClapTrap::attack(std::string const & target)
{
    //pas clair pour moi s'il faut les hit_points ou les arrack damages
    std::cout << "ClapTrap " << this->_name << " attack " << target << " causing " << this->_attack_damage << " points of damage !" << std::endl; 
}

void    ClapTrap::setter_name(std::string name)
{
    std::cout << "A ClapTrap has been called " << name << std::endl;
    this->_name = name;
    std::cout << "ClapTrap" << " is now called " << this->_name << std::endl;
    return ;
}

std::string   ClapTrap::getter_name(void)
{
    return (this->_name);
}

void    ClapTrap::takeDamage(unsigned int amount)
{
    std::cout << "ClapTrap " << this->_name << " just took " << amount << " points of damage." << std::endl;
    if (amount >= this->_energy_points)
    {
        this->_energy_points = 0;
        std::cout << "ClapTrap " << this->_name << " is dead." << std::endl;
    }
    else
    {
        this->_energy_points -= amount;
        std::cout << "ClapTrap " << this->_name << " has now " << this->_energy_points << " enery points." << std::endl;
        return ;
    }
    return;
}

//A verifier dans la grille de correction
void    ClapTrap::beRepaired(unsigned int amount)
{
    if (this->_energy_points == 0)
    {
        std::cout << "ClapTrap is dead and can no longer be repaired." << std::endl;
        return ;
    }
    else
    {
        this->_energy_points += amount;
        std::cout << "ClapTrap " << this->_name << " has be repaired and has now " <<  this->_energy_points << std::endl;
    }
}