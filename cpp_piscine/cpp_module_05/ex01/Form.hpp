#ifndef FORM_HPP
#define FORM_HPP

#include <iostream>
#include <string>

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
public:
  Form(void);
  Form(Form const &src);
  Form(std::string name, int gexec, int gsign);
  Form &				operator=(Form const &rhs);
  virtual ~Form(void);

  const std::string &	      getName(void) const;
  const int &		            getGsign(void) const;
  const int &		            getGexec(void) const;
  bool				              isSigned(void) const;
  void				              beSigned(Bureaucrat const & bur);

private:
  const std::string	      _name;
  bool				            _signed;
  const int     	        _gexec;
  const int		            _gsign;

  class GradeTooHighException: public std::exception
	{
		virtual const char * what() const throw()
    {
        return ("Oops ! Grade too high");
    }
	};
	class GradeTooLowException: public std::exception
	{
		virtual const char * what() const throw()
    {
        return ("Oops ! Grade too low");
    }
	};
  class FormNotSignedException: public std::exception
	{
		virtual const char * what() const throw()
    {
      return ("Oops ! This form is not signed yet");
    }
	};
  class FormAlreadySignedException: public std::exception
	{
		virtual const char * what() const throw()
    {
      return ("Oops ! This form is already signed.");
    }
	};
};

#endif
