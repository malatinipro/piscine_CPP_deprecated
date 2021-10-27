#include "Form.hpp"
#include "Bureaucrat.hpp"

Form::Form(void): _name("default_form"), _signed(false), _gexec(150), _gsign(150)
{
  std::cout << "Form default constructor called" << std::endl;
  return ;
}

Form::Form(const Form & src): _name(src._name), _signed(false), _gexec(src._gexec), _gsign(src._gsign)
{
  std::cout << "Form copy constructor constructor called" << std::endl;
  return ;
}

Form::Form(std::string name, int gsign, int gexec): _name(name), _signed(false), _gexec(gexec), _gsign(gsign)
{
  std::cout << "Form constructor constructor called" << std::endl;
	if (this->_gexec < 1 || this->_gsign < 1)
		throw Form::GradeTooHighException();
	if (this->_gexec > 150 || this->_gsign > 150)
		throw Form::GradeTooLowException();
  //Rajouter l affichage
  //std::cout << "Form is called " <<  std::endl;
}

Form::~Form(void)
{
  std::cout << "Form deconstructor called" << std::endl;
  return ;
}

Form &				Form::operator=(Form const & rhs)
{
  (void)rhs;
  std::cout << "Form assignation operator called" << std::endl;
  //this->_name = rhs._name;
  //this->_signed = rhs._signed;
  //this->_gexec = rhs._gexec;
  //this->_gsign = rhs._gsign;
  std::cout << "Not viable because values are consts." << std::endl;
	return *this;
}

//Verifier  s il faut que ce soit const ou pas
const std::string &Form::getName(void) const
{
	return (this->_name);
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

void	Form::beSigned(Bureaucrat const &bur)
{
  std::cout << "beSigned function called" << std::endl;
	if (bur.getGrade() > this->_gsign)
		throw Form::GradeTooLowException();
	else if (this->_signed == true)
		throw Form::FormAlreadySignedException();
	else
		this->_signed = true;
  std::cout << "Form has been signed successfully" << std::endl;
}

std::ostream &			operator<<( std::ostream & o, Form const & i)
{
	o << "Form " << i.getName() << "." << " Grade required form signature: " << i.getGsign();
	o << ". Grade required for execution: " << i.getGexec() << ".";
	if (i.isSigned())
		o << " This form is signed.";
	else
		o << " This form is not signed yet.";
	return o;
}
