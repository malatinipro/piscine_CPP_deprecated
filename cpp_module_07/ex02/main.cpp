#include "Array.hpp"
#include <iostream>

int main(void)
{
  //Instanciation de ma classe template
  std::cout << "------------- Testing strings ---------------" << std::endl;
  std::cout << "Instanciating type std::string" << std::endl;
  Array <std::string> str(6);

  std::string hello = "Hello!";
  int i = 0;
  std::cout << "Setting the values in the array" << std::endl;
  while (i < 5)
  {
    str[i] = hello[i];
    std::cout << hello[i] << std::endl;
    i++;
  }
  str[i] = '\0';
  i = 0;
  std::cout << "Accessing the values using operator []" << std::endl;
  while (i < 5)
  {
    std::cout << str[i] << std::endl;
    i++;
  }
  std::cout << "Testing if we go out of range" << std::endl;
  try
  {
    std::cout << str[10] << std::endl;
  }
  catch (std::exception &e)
  {
      std::cout << e.what() << std::endl;
  }
  std::cout << "-----------------------------------" << std::endl;
  std::cout << "------------- Testing ints ---------------" << std::endl;
  std::cout << "Instanciating type int" << std::endl;
  Array <int> tab(3);
  std::cout << "Setting the values in the array" << std::endl;
  int src[3] = {1, 2, 3};
  i = 0;
  while (i < 3)
  {
    tab[i] = src[i];
    std::cout << src[i] << std::endl;
    i++;
  }
  std::cout << "Accessing the values using operator []" << std::endl;
  i = 0;
  while (i < 3)
  {
    std::cout << tab[i] << std::endl;
    i++;
  }
  std::cout << "Testing if we go out of range" << std::endl;
  try
  {
    std::cout << tab[10] << std::endl;
  }
  catch (std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }
  std::cout << "-----------------------------------" << std::endl;
  return (0);
}
