#include "dogClass.hpp"
#include "animalClass.hpp"
#include "brainClass.hpp"

Dog::Dog(void): _brain(new Brain())
{
	this->type = "Dog";
	std::cout << "Dog constructor called" << std::endl;
  return ;
}

Dog::Dog(const Dog & src): Animal(src), _brain(new Brain(*src._brain))
{
	std::cout << "Dog copy constructor called" << std::endl;
  return ;
}

Dog::~Dog(void)
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
  return ;
}

Dog &				Dog::operator=(Dog const &rhs)
{
	Animal::operator=(rhs);
  *_brain = *rhs._brain;
  return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "WOUFF WOUFF" << std::endl;
  return ;
}
