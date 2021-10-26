#include "wrongAnimalClass.hpp"
#include "wrongCatClass.hpp"

WrongCat::WrongCat(void): WrongAnimal("Cat")
{
  std::cout << "Wrong cat constructor called" << std::endl;
  return ;
}

//https://www.cplusplus.com/forum/beginner/73730/
WrongCat::WrongCat(const WrongCat & src): WrongAnimal(src)
{
	std::cout << "Wrong cat copy constructor called" << std::endl;
  return ;
}

WrongCat::~WrongCat()
{
	std::cout << "Wrong cat destructor called" << std::endl;
  return ;
}

WrongCat &				WrongCat::operator=(WrongCat const &rhs )
{
  WrongAnimal::operator=(rhs);
  return (*this);
}

void	WrongCat::makeSound(void) const
{
	std::cout << "MAAAOOOWWWW" << std::endl;
  return ;
}
