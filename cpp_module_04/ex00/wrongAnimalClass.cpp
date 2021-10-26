#include "wrongAnimalClass.hpp"

WrongAnimal::WrongAnimal(void): type("Animal")
{
	std::cout << "Wrong animal constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(std::string arg_type)
{
	this->type = arg_type;
	std::cout << "Wrong animal constructor called" << std::endl;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal & src)
{
	std::cout << "Wrong animal copy constructor called" << std::endl;
	*this = src;
  return ;
}

WrongAnimal::~WrongAnimal(void)
{
	std::cout << "Wrong animal destructor called" << std::endl;
	return ;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
    std::cout << "Wrong animal assignation operator called" << std::endl;
    this->type = rhs.type;
    return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "* WRONG ANIMAL SOUND *" << std::endl;
	return ;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}
