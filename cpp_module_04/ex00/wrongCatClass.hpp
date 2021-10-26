#ifndef WRONGCATCLASS_HPP
#define WRONGCATCLASS_HPP

#include "wrongAnimalClass.hpp"

class WrongCat: public WrongAnimal
{
public:
  WrongCat(void);
  WrongCat(WrongCat const &src);
  virtual ~WrongCat(void);
  WrongCat &			operator=(WrongCat const &rhs );
  void	makeSound(void) const;
};

#endif
