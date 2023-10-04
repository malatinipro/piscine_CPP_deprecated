#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

//fonction pour tester le pointeur sur fonction avec n'importe quel type
template<typename T>
void my_test(T const &a)
{
  std::cout << static_cast<T>(a + 1) << std::endl;
}

//Fonction demandee par le sujet
template<typename T>
void iter(T const *array, unsigned int const len, void(*f)(T const &arg))
{
  unsigned int i = 0;
  while (i < len)
  {
    (f)(array[i]);
    i++;
  }
}

#endif
