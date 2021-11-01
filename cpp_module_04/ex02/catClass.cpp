#include "animalClass.hpp"
#include "catClass.hpp"
#include "brainClass.hpp"

Cat::Cat(void): _brain(new Brain())
{
  this->type = "Cat";
  std::cout << "Cat constructor called" << std::endl;
  return ;
}

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
  //Attention cette methode n est pas bonne !

  /*	
  Animal::operator=(rhs);
  *_brain = *rhs._brain;
  */
  if (this == &src)
	  return (*this);
  this->_type = src.getType();
  detete this->_brain;
  this->_brain = new Brain(*src._brain);
  return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "MAAAOOOWWWW" << std::endl;
  return ;
}
