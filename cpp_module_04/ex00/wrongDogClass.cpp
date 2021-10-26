#include "wrongAnimalClass.hpp"
#include "wrongDogClass.hpp"

WrongDog::WrongDog(void): WrongAnimal("Dog")
{
  std::cout << "Wrong dog constructor called" << std::endl;
  return ;
}

//https://www.cplusplus.com/forum/beginner/73730/
WrongDog::WrongDog(const WrongDog & src): WrongAnimal(src)
{
	std::cout << "Wrong dog copy constructor called" << std::endl;
  return ;
}

WrongDog::~WrongDog()
{
	std::cout << "Wrong dog destructor called" << std::endl;
  return ;
}

WrongDog &				WrongDog::operator=(WrongDog const &rhs )
{
  this->type = rhs.type;
  return (*this);
}

void	WrongDog::makeSound(void) const
{
	std::cout << "WOUFF WOUFF" << std::endl;
  return ;
}
