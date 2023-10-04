/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:01:20 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 13:02:06 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "mutantstack.hpp"
#include <list>

int main(void)
{
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
  std::cout << "Is it empty ? " << s.empty() << std::endl;
  std::cout << "What is the size ? " << s.size() << std::endl;
  s.push(5);
  s.push(6);
  s.pop();
  s.pop();
  while (!s.empty())
  {
    std::cout << ' ' << s.top();
    s.pop();
	}
  std::cout << std::endl;
  std::cout << "Is it empty now ? " << s.empty() << std::endl;
  return (0);
}
