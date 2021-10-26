#ifndef WRONGDOGCLASS_HPP
#define WRONGDOGCLASS_HPP

#include "wrongAnimalClass.hpp"

class WrongDog: public WrongAnimal
{
public:
  WrongDog(void);
  WrongDog(WrongDog const &src);
  virtual ~WrongDog(void);
  WrongDog &			operator=(WrongDog const &rhs );
  void	makeSound(void) const;
};

#endif
