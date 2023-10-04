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

Bureaucrat::Bureaucrat(std::string const name, int grade): _name(name)
{
  std::cout << "Bureaucrat constructor called" << std::endl;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade = grade;
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
  //The name can not be assigned as it is const
  //this->_name = rhs._name;
  this->_grade = rhs._grade;
	return *this;
}

std::ostream &  operator<<(std::ostream &COUT, Bureaucrat const & rhs)
{
	COUT << rhs.getName() << ", bureaucrat grade " << rhs.getGrade();
	return COUT;
}

void	Bureaucrat::incGrade(void)
{
  std::cout << "The incGrade function has been invoked for " << this->getName() << std::endl;
	if (this->_grade - 1 < 1)
		throw Bureaucrat::GradeTooHighException();
	else
		this->_grade--;
  std::cout << this->getName() << " is now graded " << this->getGrade() << std::endl;
  return ;
}

void	Bureaucrat::decGrade(void)
{
  std::cout << "The decGrade function has been invoked for " << this->getName() << std::endl;
	if (this->_grade + 1 > 150)
		throw Bureaucrat::GradeTooLowException();
	else
		this->_grade++;
  std::cout << this->getName() << " is now graded " << this->getGrade() << std::endl;
  return ;
}

const std::string	Bureaucrat::getName(void) const
{
	return(this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}
