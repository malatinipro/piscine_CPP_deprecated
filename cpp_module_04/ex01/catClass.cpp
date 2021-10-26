#include "animalClass.hpp"
#include "catClass.hpp"

Cat::Cat(void): Animal("Cat")
{
  this->_brain = new Brain;
  std::cout << "Cat constructor called" << std::endl;
  return ;
}

//https://www.cplusplus.com/forum/beginner/73730/
Cat::Cat(const Cat & src): Animal(src), _brain(new Brain(*src._brain))
{
	std::cout << "Cat copy constructor called" << std::endl;
  return ;
}

Cat::~Cat(void)
{
	std::cout << "Cat destructor called" << std::endl;
  delete this->_brain;
  return ;
}

Cat &				Cat::operator=(Cat const &rhs )
{
  Animal::operator=(rhs);
  *_brain = *rhs._brain;
  return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "MAAAOOOWWWW" << std::endl;
  return ;
}
