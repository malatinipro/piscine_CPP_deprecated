#ifndef WRONGANIMALCLASS_HPP
#define WRONGANIMALCLASS_HPP

#include <iostream>
#include <string>

class WrongAnimal
{
public:
  WrongAnimal(void);
  WrongAnimal(WrongAnimal const &src);
  WrongAnimal(std::string arg_type);
  //Si le destructeur n etait pas virtual il y aurait des leaks
  virtual ~WrongAnimal(void);

  WrongAnimal &		operator=(WrongAnimal const & rhs);
  std::string		getType(void) const;
  void	makeSound(void) const;

protected:
  std::string type;
};

#endif
