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
  (void)rhs;
  std::cout << "Bureaucrat assignation operator called" << std::endl;
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
		std::cerr << this->_name << " is not allowed " << form.getName() << ": ";
		std::cerr << e.what() << std::endl;
		return ;
	}
	std::cout << this->_name << " signed " << form.getName() << std::endl;
}

std::string	Bureaucrat::getName(void) const
{
	return(this->_name);
}

int	Bureaucrat::getGrade(void) const
{
	return (this->_grade);
}
