#include "dogClass.hpp"
#include "animalClass.hpp"

Dog::Dog(void): Animal("Dog")
{
	std::cout << "Dog constructor called" << std::endl;
  return ;
}

Dog::Dog(const Dog & src): Animal(src)
{
	std::cout << "Dog copy constructor called" << std::endl;
  return ;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
  return ;
}

Dog &				Dog::operator=(Dog const &rhs)
{
  this->type = rhs.type;
  return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "WOUFF WOUFF" << std::endl;
  return ;
}
