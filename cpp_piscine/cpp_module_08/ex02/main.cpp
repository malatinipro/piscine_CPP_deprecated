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
  std::cout << "----------------------------" << std::endl;
  //https://www.cplusplus.com/reference/stack/stack/
  std::cout << "We are now doing some tests on the stack that have been copied from the Mutant Stack" << std::endl;
  std::cout << "----------------------------" << std::endl;
  std::cout << "Let's call other functions/methods that we can use on a stack !" << std::endl;
  std::cout << "----------------------------" << std::endl;
  std::cout << "Is it empty ? " << s.empty() << std::endl;
  std::cout << "----------------------------" << std::endl;
  std::cout << "What is the size ? " << s.size() << std::endl;
   std::cout << "----------------------------" << std::endl;
  s.push(5);
  s.push(6);
   std::cout << "----------------------------" << std::endl;
  std::cout << "We learned that stack does not expose iterators on internet." << std::endl;
   std::cout << "----------------------------" << std::endl;
  s.pop();
  s.pop();
  std::cout << "The top of our stack is " << s.top() << std::endl;
  std::cout << "----------------------------" << std::endl;
  std::cout << "Let's pop everything one by one" << std::endl;
  while (!s.empty())
  {
    std::cout << ' ' << s.top();
    s.pop();
	}
  std::cout << std::endl;
  std::cout << "----------------------------" << std::endl;
  std::cout << "Is it empty now ? " << s.empty() << std::endl;
  std::cout << "----------------------------" << std::endl;
  return (0);
}
