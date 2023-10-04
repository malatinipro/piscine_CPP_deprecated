/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:27:12 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 19:07:22 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>

RobotomyRequestForm::RobotomyRequestForm(void):
  Form("RobotomyRequestForm", 45, 72, "default_target")
{
  return ;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &src):
  Form(src)
{
  return ;
}

RobotomyRequestForm::RobotomyRequestForm(const std::string target):
  Form("RobotomyRequestForm", 45, 72, target)
{
  return ;
}

RobotomyRequestForm::~RobotomyRequestForm(void)
{
  return ;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &rhs)
{
	(void)rhs;
	return *this;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor)
{
	int ret = rand();
  try
  {
    Form::execute(executor);
  }
  catch(const std::exception &e)
  {
    std::cout << e.what() << std::endl;
    return ;
  }
  std::cout << "BZZZ * DRILL NOISES * BZZZZ" << std::endl;
  if (ret % 2 == 0)
  {
    std::cout << this->_target << " has been robotomized" << std::endl;
  }
  else
    std::cout << this->_target << "Robotomization failed" << std::endl;
}
