/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 20:35:12 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 20:36:47 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void): _name("default_form"), _signed(false), _gexec(150),
  _gsign(150), _target("default_target")
{
  return ;
}

Form::Form(const Form & src): _name(src._name), _signed(false),
  _gexec(src._gexec), _gsign(src._gsign), _target(src._target)
{
  return ;
}

Form::Form(std::string name, int gexec, int gsign, std::string target):
  _name(name), _signed(false), _gexec(gexec), _gsign(gsign), _target(target)
{
	if (this->_gexec < 1 || this->_gsign < 1)
		throw Form::GradeTooHighException();
	if (this->_gexec > 150 || this->_gsign > 150)
		throw Form::GradeTooLowException();
  return ;
}

Form::~Form(void)
{
  return ;
}

Form  &Form::operator=(Form const & rhs)
{
  (void)rhs;
	return *this;
}

const std::string &Form::getName(void) const
{
	return (this->_name);
}

const std::string &Form::getTarget(void) const
{
	return (this->_target);
}

const int &Form::getGsign(void) const
{
	return (this->_gsign);
}

const int &Form::getGexec(void) const
{
	return (this->_gexec);
}

bool  Form::isSigned(void) const
{
	return (this->_signed);
}

void Form::setSign(void)
{
  this->_signed = true;
  return;
}

Form & Form::beSigned(Bureaucrat const &bur)
{
  if (bur.getGrade() > this->getGsign())
    throw Form::GradeTooLowException();
  else if (bur.getGrade() <= this->getGsign())
    this->setSign();
	return *this;
}

std::ostream  &operator<<( std::ostream & o, Form const & i)
{
	o << "Form " << i.getName() << "."
    << " Grade required form signature: " << i.getGsign();
	o << ". Grade required for execution: " << i.getGexec() << ".";
	if (i.isSigned())
		o << " This form is signed.";
	else
		o << " This form is not signed yet.";
	return o;
}

void		Form::execute(Bureaucrat const &executor)
{
	if (this->_signed == false)
		throw Form::FormNotSignedException();
	else if (executor.getGrade() > this->_gexec)
		throw Form::GradeTooLowException();
}
