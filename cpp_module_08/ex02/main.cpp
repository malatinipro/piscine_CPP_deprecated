#include <iostream>
#include "mutantstack.hpp"
//Toujours penser a inclure le container qui nous interesse
#include <list>

int main(void)
{
  //Main du sujet
  std::cout << "----------------------------" << std::endl;
  std::cout << "------ MANDATORY TESTS ----" << std::endl;
  MutantStack<int> mstack;
  mstack.push(5);
  mstack.push(17);
  std::cout << mstack.top() << std::endl;
  mstack.pop();
  std::cout << mstack.size() << std::endl;
  mstack.push(3);
  mstack.push(5);
  mstack.push(737);
  mstack.push(0);
  MutantStack<int>::iterator it = mstack.begin();
  MutantStack<int>::iterator ite = mstack.end();
  ++it;
  --it;
  while (it != ite)
  {
  std::cout << *it << std::endl;
  ++it;
  }
  std::stack<int> s(mstack);
  std::cout << "----------------------------" << std::endl;
  std::cout << "-------  EXTRA TESTS -------" << std::endl;
  //std::list<int> l = reinterpret_cast<std::list<int>>(l(s));
  //Est-ce qu'il faudrait caster la stack en list pour que ce soit ok ?
  //Comparing a list as asked in the subject
  /*
  std::list<int> listOfInts;
  std::cout << "We just declared a list" << std::endl;
  std::cout << "Let's add the same numbers and compare it" << std::endl;
  listOfInts.push_back(5);
  listOfInts.push_back(17);
  std::cout << listOfInts.begin() << std::endl;
  listOfInts.pop();
  std::cout << listOfInts.size() << std::endl;
  listOfInts.push_back(3);
  listOfInts.push_back(5);
  listOfInts.push_back(737);
  listOfInts.push_back(0);
  typedef typename std::stack<T>::container_type::iterator my_iterator;
  my_iterator it2 = listOfInts.begin();
  my_iterator it3 = listOfInts.end();
  ++it2;
  --it2;
  while (it2 != it3)
  {
  std::cout << *it2 << std::endl;
  ++it2;
  }
  std::cout << "----------------------------" << std::endl;
  return (0);
  */
}
