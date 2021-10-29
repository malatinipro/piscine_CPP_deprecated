#ifndef WHATEVER_HPP
#define WHATEVER_HPP

#include <iostream>

//Swaps the value and return nothing
template<typename T>
void swap(T &first, T&second)
{
  T tmp;

  std::cout << "--------------------" << std::endl;
  std::cout << "Swap function called" << std::endl;
  std::cout << "--------------------" << std::endl;
  //comme c'est une référence on a presque rien besoin de faire
  std::cout << "first is " << first << std::endl;
  std::cout << "second is " << second << std::endl;
  std::cout << "--------------------" << std::endl;
  tmp = first;
  first = second;
  second = tmp;
  std::cout << "first is " << first << std::endl;
  std::cout << "second is " << second << std::endl;
  std::cout << "--------------------" << std::endl;
}

template<typename T>
T const &min(T const &one, T const &second)
{
  std::cout << "--------------------" << std::endl;
  std::cout << "min function called" << std::endl;
  std::cout << "--------------------" << std::endl;
  if (one < second)
  {
    std::cout << "the min is " << one << std::endl;
    return (one);
  }
  std::cout << "the min is " << second << std::endl;
  return (second);
  std::cout << "--------------------" << std::endl;
}

template<typename T>
T const &max(T const &one, T const &second)
{
  std::cout << "--------------------" << std::endl;
  std::cout << "max function called" << std::endl;
  std::cout << "--------------------" << std::endl;
  if (one > second)
  {
    std::cout << "the max is " << one << std::endl;
    return (one);
  }
  std::cout << "the max is " << second << std::endl;
  std::cout << "--------------------" << std::endl;
  return (second);
}

#endif
