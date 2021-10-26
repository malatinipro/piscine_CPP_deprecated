#include "animalClass.hpp"

Animal::Animal(void): type("Animal")
{
	std::cout << "Animal constructor called" << std::endl;
	return ;
}

Animal::Animal(std::string arg_type)
{
	this->type = arg_type;
	std::cout << "Animal constructor called" << std::endl;
	return ;
}

Animal::Animal(const Animal & src): type(src.type)
{
	std::cout << "Animal copy constructor called" << std::endl;
  return ;
}

Animal::~Animal(void)
{
	std::cout << "Animal destructor called" << std::endl;
	return ;
}

Animal &Animal::operator=(Animal const &rhs)
{
    std::cout << "Animal assignation operator called" << std::endl;
    this->type = rhs.type;
    return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "* ANIMAL SOUND *" << std::endl;
	return ;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}
