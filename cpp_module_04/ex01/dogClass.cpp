#include "dogClass.hpp"
#include "animalClass.hpp"

Dog::Dog(void): Animal("Dog")
{
	this->_brain = new Brain;
	std::cout << "Dog constructor called" << std::endl;
  return ;
}

Dog::Dog(const Dog & src): Animal(src), _brain(new Brain(*src._brain))
{
	std::cout << "Dog copy constructor called" << std::endl;
  return ;
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
	delete this->_brain;
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
