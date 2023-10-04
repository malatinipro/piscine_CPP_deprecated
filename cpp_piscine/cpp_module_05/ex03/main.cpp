/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 20:42:09 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 20:43:10 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

std::ostream  &operator<<(std::ostream &COUT, Form const &rhs);

int main(void)
{
  Intern someRandomIntern;
  Form* rrf;
  {
    std::cout << "The args are 'robotomy request' and 'Bender'" << std::endl;
    rrf = someRandomIntern.makeForm("robotomy request", "Bender");
    std::cout << *rrf << std::endl;
    delete rrf;
  }
  {
    std::cout << "The args are 'shrubbery creation' and 'Target'" << std::endl;
    std::string s1 = "shrubbery creation";
    try
    {
      rrf =  someRandomIntern.makeForm(s1, "Target");
      std::cout << *rrf << std::endl;
      delete rrf;
    }
    catch (std::exception &e)
    {
      std::cout << e.what() << std::endl;
    }
    std::cout << "The args are 'does not exist form' and 'Target'" << std::endl;
    std::string s2 = "does not exist form";
    try
    {
      rrf =  someRandomIntern.makeForm(s2, "Target");
      std::cout << *rrf << std::endl;
      delete rrf;
    }
    catch (std::exception &e)
    {
      std::cout << e.what() << std::endl;
    }
  }
  return (0);
}
