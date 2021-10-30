#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
  return ;
}

Intern::~Intern()
{
	std::cout << "Intern default desconstructor called" << std::endl;
  return ;
}

Intern::Intern(Intern const & src)
{
	std::cout << "Intern copy constructor called" << std::endl;
  //On ne peut rien copier puisqu'il n a aucun attribut
  return (*this);
}
