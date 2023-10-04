/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:21:32 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 12:21:38 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("Bureaucrat"), _grade(150)
{
  std::cout << "Default Bureaucrat constructor called" << std::endl;
  return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat & src): _name(src._name), _grade(src._grade)
{
  std::cout << "Bureaucrat copy constructor called" << std::endl;
  return ;
}

Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name), _grade(grade)
{
  std::cout << "Bureaucrat constructor called" << std::endl;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
  std::cout << "Bureaucrat is called " << this->getName() << " and has grade " << this->getGrade() << std::endl;
  return ;
}

Bureaucrat::~Bureaucrat(void)
{
  std::cout << "Bureaucrat desconstructor called" << std::endl;
  return ;
}

Bureaucrat &	Bureaucrat::operator=(Bureaucrat const & rhs)
{
  std::cout << "Bureaucrat assignation operator called" << std::endl;
  this->_grade = rhs._grade;
	return *this;
}

std::ostream &  operator<<(std::ostream &COUT, Bureaucrat const & rhs)
{
	COUT << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return COUT;
}

void	Bureaucrat::signForm(Form &form)
{
	try
	{
		form.beSigned(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << this->_name << " cannot sign because ";
		std::cerr << e.what() << std::endl;
		return ;
	}
	std::cout << this->_name << " signes " << form.getName() << std::endl;
}

std::string	Bureaucrat::getName(void) const
{
	return(this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}
