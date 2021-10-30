#include "span.hpp"
#include <iostream>

void display_vector(std::vector<int> &v);

int main(void)
{
  //Ici on va definir la taille max de notre vecteur
  Span sp = Span(5);
  //Avec add number on va faire un check et/ou un push_back
  sp.addNumber(3);
  sp.addNumber(0);
  sp.addNumber(17);
  sp.addNumber(6);
  sp.addNumber(40);
  std::cout << "--------------------------" << std::endl;
  std::cout << "Let's display the span" << std::endl;
  std::cout << "--------------------------" << std::endl;
  sp.display();
  std::cout << "--------------------------" << std::endl;
  std::cout << "The longest span is : " << sp.longestSpan() << std::endl;
  std::cout << "--------------------------" << std::endl;
  std::cout << "The shortest span is : " << sp.shortestSpan() << std::endl;
  std::cout << "--------------------------" << std::endl;
}
