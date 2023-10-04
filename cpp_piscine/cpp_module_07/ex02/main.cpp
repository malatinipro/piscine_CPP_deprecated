/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:44:30 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 12:45:19 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Array.hpp"
#include <iostream>

int main(void)
{
  Array <std::string> str(6);

  std::string hello = "Hello!";
  int i = 0;
  while (i < 5)
  {
    str[i] = hello[i];
    std::cout << hello[i] << std::endl;
    i++;
  }
  str[i] = '\0';
  i = 0;
  while (i < 5)
  {
    std::cout << str[i] << std::endl;
    i++;
  }
  try
  {
    std::cout << str[10] << std::endl;
  }
  catch (std::exception &e)
  {
      std::cout << e.what() << std::endl;
  }
  Array <int> tab(3);
  int src[3] = {1, 2, 3};
  i = 0;
  while (i < 3)
  {
    tab[i] = src[i];
    std::cout << src[i] << std::endl;
    i++;
  }
  i = 0;
  while (i < 3)
  {
    std::cout << tab[i] << std::endl;
    i++;
  }
  try
  {
    std::cout << tab[10] << std::endl;
  }
  catch (std::exception &e)
  {
    std::cout << e.what() << std::endl;
  }
  Array <int> empty;
  Array <std::string> copy(str);
  const Array <int> co(tab);
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
