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
  std::cout << "--------------------------------------" << std::endl;
  std::cout << "Accessing the values using operator []" << std::endl;
  i = 0;
  while (i < 3)
  {
    std::cout << tab[i] << std::endl;
    i++;
  }
  std::cout << "Testing if we go out of range/limits" << std::endl;
  try
  {
    std::cout << tab[10] << std::endl;
  }
  catch (std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }
  std::cout << "------------------------------------" << std::endl;
  std::cout << "Creating an empty array --silently" << std::endl;
  Array <int> empty;
  std::cout << "------------------------------------" << std::endl;
  std::cout << "Copying the one of the array --silently" << std::endl;
  Array <std::string> copy(str);
  std::cout << "-------------------------------------" << std::endl;
  std::cout << "Testing a const Array" << std::endl;
  const Array <int> co(tab);
  std::cout << "We created a const copy of tab and we will try to access index 1" << std::endl;
  try
  {
    std::cout << co[1] << std::endl;
  }
  catch (std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }
  return (0);
}
