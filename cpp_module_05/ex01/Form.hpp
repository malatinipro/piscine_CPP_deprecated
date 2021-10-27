#ifndef FORM_HPP
#define FORM_HPP

# include "Bureaucrat.hpp"

class Form
{
public:
  Form(void);
  Form(Form const &src);
  Form(std::string name, int gsign, int gexec);

  Form &				operator=(Form const &rhs);
  virtual ~Form();

  std::string &	      getName(void);
  int &		            getGsign(void);
  int &		            getGexec(void);
  bool				        isSigned(void);

  //rend le formulaire signé si la note du bureaucrate est suffisamment élevée
  void				beSigned(Bureaucrat const &bur);

private:
  //verifier si ce doit etre const ou pas
  std::string	      _name;
  bool				      _signed;
  int     	        _gexec;
  int		            _gsign;

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
	class FormAlreadySignedException: public std::exception
	{
		virtual const char * what() const throw()
    {
        return ("Oops ! Form already signed");
    }
	};
};

std::ostream &			operator<<(std::ostream & o, Form const &rhs);

#endif
