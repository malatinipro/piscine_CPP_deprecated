/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:29:51 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 19:11:37 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
  return ;
}

Intern::~Intern()
{
  return ;
}

Intern::Intern(Intern const &src)
{
	(void)src;
  return ;
}

Intern & Intern::operator=(Intern const &rhs)
{
	(void)rhs;
	return *this;
}

Form * Intern::makeForm(std::string name, std::string target)
{
	std::string forms[3] = {
    "shrubbery creation",
    "robotomy request",
    "presidential pardon"
    };

	Form * src[3] = {
    new ShrubberyCreationForm(target),
    new RobotomyRequestForm(target),
    new PresidentialPardonForm(target)
  };

  int i = 0;
  int check = -1;
  std::string form_to_create;
  while (i < 3)
  {
    if (forms[i] == name)
    {
      form_to_create = forms[i];
      check = i;
      std::cout << "We found it" << std::endl;
      break;
    }
    i++;
  }
  i = 0;
  while (i < 3)
  {
	  if (i != check)
		  delete src[i];
	  i++;
  }
  if (check == -1)
    throw std::runtime_error(std::string("Error. Form mentionned does not exist."));
  if (check != -1)
  {
    std::cout << "Inter creates " << name << std::endl;
    return (src[check]);
  }
  return (NULL);
}
