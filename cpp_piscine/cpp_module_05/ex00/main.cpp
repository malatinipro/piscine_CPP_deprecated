/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:20:39 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 12:21:14 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(void)
{
  {
    Bureaucrat junior("Junior", 150);
    try
    {
      junior.incGrade();
    }
    catch(const std::exception &e)
    {
      std::cerr << e.what() << std::endl;
    }
    try
    {
      junior.decGrade();
      junior.decGrade();
    }
    catch(const std::exception &e)
    {
      std::cerr << e.what() << std::endl;
      std::cout << junior << std::endl;
    }
  }
  {
    Bureaucrat ceo("CEO", 1);
    try
    {
      ceo.incGrade();
    }
    catch(const std::exception &e)
    {
      std::cerr << e.what() << std::endl;
      std::cout << ceo << std::endl;
    }
    try
    {
      ceo.decGrade();
    }
    catch(const std::exception &e)
    {
      std::cerr << e.what() << std::endl;
    }
  }
}
