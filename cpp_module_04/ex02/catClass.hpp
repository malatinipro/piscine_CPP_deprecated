#ifndef CATCLASS_HPP
#define CATCLASS_HPP

#include "animalClass.hpp"
#include "brainClass.hpp"

class Cat: public Animal
{
public:
  Cat(void);
  Cat(Cat const &src);
  virtual ~Cat(void);
  Cat &			operator=(Cat const &rhs );
  void	makeSound(void) const;
private:
  //as requested
  Brain *_brain;
};

#endif
