/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 20:32:58 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 20:34:08 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void): _name("Bureaucrat"), _grade(150)
{
	return ;
}

Bureaucrat::Bureaucrat(const Bureaucrat & src): _name(src._name),
	_grade(src._grade)
{
	return ;
}

Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name), _grade(grade)
{
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	std::cout << "Bureaucrat is called " << this->getName()
		<< " and has grade " << this->getGrade() << std::endl;
	return ;
}

Bureaucrat::~Bureaucrat(void)
{
	return ;
}

Bureaucrat	&Bureaucrat::operator=(Bureaucrat const &rhs)
{
	(void)rhs;
	std::cout << "grade and name should be const so we can't assign them." << std::endl;
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
	std::cout << this->_name << " signs " << form.getName() << std::endl;
}

std::string	Bureaucrat::getName(void) const
{
	return(this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}

void	Bureaucrat::executeForm(Form &form)
{
	try
	{
		form.execute(*this);
	}
	catch(const std::exception& e)
	{
		std::cerr << this->_name << " cannot execute " << form.getName() << ": ";
		std::cerr << e.what() << std::endl;
		return ;
	}
	std::cout << this->_name << " executs " <<  form.getName() << std::endl;
}
