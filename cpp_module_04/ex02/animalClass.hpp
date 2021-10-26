#ifndef ANIMALCLASS_HPP
# define ANIMALCLASS_HPP

#include <iostream>
#include <string>

class Animal
{
public:
  Animal(void);
  Animal(Animal const &src);
  virtual ~Animal(void);

  Animal &		operator=( Animal const & rhs );
  std::string		getType(void) const;
  //Abstract class
  virtual void	makeSound(void) const = 0;

protected:
  std::string type;
};

#endif
