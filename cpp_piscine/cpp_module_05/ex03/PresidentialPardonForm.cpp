/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:31:57 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 12:32:26 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"
//TODO: fixme ?
PresidentialPardonForm::PresidentialPardonForm(): Form("PresidentialPardonForm", 5, 25, "default_target")
{
  return ;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm & src): Form(src)
{
  this->_target = src.getTarget();
  return ;
}

PresidentialPardonForm::PresidentialPardonForm(std::string const target): Form("PresidentialPardonForm", 5, 25, target)
{
  return ;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
  return ;
}

PresidentialPardonForm &				PresidentialPardonForm::operator=(PresidentialPardonForm const & rhs)
{
	(void)rhs;
	return *this;
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor)
{
  (void)executor;
  try
	{
		Form::execute(executor);
	}
  catch(const std::exception& e)
	{
		std::cout << e.what() << std::endl;
		return ;
	}
	std::cout << this->_target << " was forgiven by Zafod Beeblebrox" << std::endl;
}
