#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <iostream>
#include <stack>
#include <algorithm>

template<typename T>
class MutantStack: public std::stack<T>
{
public:
  MutantStack() {}
  //A checker
  MutantStack(const MutantStack<T> &src) { *this = src;}
  virtual ~MutantStack() {}
  MutantStack<T> &operator=(const MutantStack<T> &rhs)
  {
    //voir a quoi correspond c dans une stack
    this->c = rhs.c;
    return (*this);
  }
  //On pourrait utiliser using aussi
  //Va nous permettre de ne pas avoir a retaper le nom en entier
  //Ajout de notre iterateur
  typedef typename std::stack<T>::container_type::iterator iterator;

  //definition de fonctions membres
  //On va pouvoir iterer du debut jusqu a la fin de la stack / list
  //Les indications du sujet nous suggeraient de faire ces fonctions
  iterator begin() {return this->c.begin();}
  iterator end() {return this->c.end();}
};

#endif
