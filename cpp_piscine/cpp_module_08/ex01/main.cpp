/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:59:04 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 13:00:12 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>

int main(void)
{
  Span sp = Span(5);
  try
  {
    sp.addNumber(3);
  }
  catch (std::exception &e)
  {
    std::cerr << e.what() << std::endl;
  }
  try
  {
    sp.addNumber(0);
  }
  catch (std::exception &e)
  {
    std::cerr << e.what() << std::endl;
  }
  try
  {
    sp.addNumber(17);
  }
  catch (std::exception &e)
  {
    std::cerr << e.what() << std::endl;
  }
  try
  {
    sp.addNumber(6);
  }
  catch (std::exception &e)
  {
    std::cerr<< e.what() << std::endl;
  }
  try
  {
    sp.addNumber(40);
  }
  catch (std::exception &e)
  {
    std::cerr << e.what() << std::endl;
  }
  try
  {
    sp.addNumber(41);
  }
  catch (std::exception &e)
  {
    std::cerr << e.what() << std::endl;
  }
  sp.display();
  Span sp3 = sp;
  Span sp2 = Span(10000);
  sp2.addRangeNumber(0, 9999);
  sp2.display();
  return (0);
}
