#include "animalClass.hpp"

Animal::Animal(void)
{
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
    this->type = rhs.type;
    return (*this);
}

std::string	Animal::getType(void) const
{
	return (this->type);
}
