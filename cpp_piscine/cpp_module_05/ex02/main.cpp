/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:25:10 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 12:26:26 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

std::ostream &			operator<<(std::ostream &COUT, Form const &rhs);

int main(void)
{
  {
    Bureaucrat top("CEO", 1);
    {
      ShrubberyCreationForm shrub("test target");
      top.signForm(shrub);
      top.executeForm(shrub);

    }
    {
      PresidentialPardonForm pres("test2 target");
      top.signForm(pres);
      top.executeForm(pres);
    }
    {
      RobotomyRequestForm req("test3 target");
      top.signForm(req);
      top.executeForm(req);
    }
  }
  std::cout << std::endl;
  {
    Bureaucrat low("Low", 46);
    {
      ShrubberyCreationForm shrub("test target");
      low.signForm(shrub);
      low.executeForm(shrub);

    }
    {
      PresidentialPardonForm pres("test2 target");
      low.signForm(pres);
      low.executeForm(pres);
    }
    {
      RobotomyRequestForm req("test3 target");
      low.signForm(req);
      low.executeForm(req);
    }
  }
  return (0);
}
