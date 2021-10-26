#ifndef ANIMALCLASS_HPP
# define ANIMALCLASS_HPP

#include <iostream>
#include <string>
//tuto: https://www.youtube.com/watch?v=jELbKhGkEi0

/*
** On aurait aussi pu utiliser pragma
** Notre classe animal est la Base class
** dont vont heriter publiquement les autres
*/

class Animal
{
/*
** Nous allons implementer une fonction virtuelle
** pour permettre le polymorphisme.

** POLYMORPHISME: concept consistant à fournir une
** interface unique à des entités pouvant avoir
** différents types
*/

/*
** PRINCIPE : fournir une interface commune
** via la base classe.
** Chaque classe derivee devra implementer sa "version".
** La cible est connue au moment de l'execution.
*/
public:
  Animal(void);
  Animal(Animal const &src);
  Animal(std::string arg_type);
  //Dans une classe canonique le destructeur doit etre virtual
  //justement pour que le polymorphisme ne génère pas de leaks
  virtual ~Animal(void);

  Animal &		operator=( Animal const & rhs );
  //Fonction montree dans le main du sujet
  std::string		getType(void) const;
  //Every animal must be able to use the method makeSound().
  virtual void	makeSound(void) const;

protected:
  //Ecrit sans le underscore comme demande dans le sujet
  std::string type;
};

#endif
