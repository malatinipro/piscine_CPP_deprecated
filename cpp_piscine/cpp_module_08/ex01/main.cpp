#include "span.hpp"
#include <iostream>

//void display_vector(std::vector<int> &v);

int main(void)
{
  //Ici on va definir la taille max de notre vecteur
  std::cout << "-------------------------------" << std::endl;
  Span sp = Span(5);
  std::cout << "We just created a span with N = 5" << std::endl;
  std::cout << "-------------------------------" << std::endl;
  std::cout << "Let's add the numbers !" << std::endl;
  std::cout << "-------------------------------" << std::endl;
  //Avec add number on va faire un check et/ou un push_back
  try
  {
    std::cout << "Adding 3" << std::endl;
    sp.addNumber(3);
  }
  catch (std::exception &e)
  {
    std::cerr << e.what() << std::endl;
  }
  try
  {
    std::cout << "Adding 0" << std::endl;
    sp.addNumber(0);
  }
  catch (std::exception &e)
  {
    std::cerr << e.what() << std::endl;
  }
  try
  {
    std::cout << "Adding 17" << std::endl;
    sp.addNumber(17);
  }
  catch (std::exception &e)
  {
    std::cerr << e.what() << std::endl;
  }
  try
  {
    std::cout << "Adding 6" << std::endl;
    sp.addNumber(6);
  }
  catch (std::exception &e)
  {
    std::cerr<< e.what() << std::endl;
  }
  try
  {
    std::cout << "Adding 40" << std::endl;
    sp.addNumber(40);
  }
  catch (std::exception &e)
  {
    std::cerr << e.what() << std::endl;
  }
  std::cout << "An error should be thrown here." << std::endl;
  std::cout << "------------------------------" << std::endl;
  try
  {
    std::cout << "Adding 41" << std::endl;
    sp.addNumber(41);
  }
  catch (std::exception &e)
  {
    std::cerr << e.what() << std::endl;
  }
  std::cout << "Let's display the span" << std::endl;
  std::cout << "--------------------------" << std::endl;
  sp.display();
  std::cout << "--------------------------" << std::endl;
  std::cout << "The longest span is : " << sp.longestSpan() << std::endl;
  std::cout << "--------------------------" << std::endl;
  std::cout << "The shortest span is : " << sp.shortestSpan() << std::endl;
  std::cout << "--------------------------" << std::endl;
  //Span sp3 = sp;
  /*
  Span sp2 = Span(10000);
  std::cout << "We just created a span with N = 1000" << std::endl;
  std::cout << "-------------------------------" << std::endl;
  std::cout << "Let's add the numbers (in one function call)!" << std::endl;
  sp2.addRangeNumber(0, 9999);
  std::cout << "-------------------------------" << std::endl;
  std::cout << "Let's display the span" << std::endl;
  sp2.display();
  std::cout << "-------------------------------" << std::endl;
  */
  return (0);
}
