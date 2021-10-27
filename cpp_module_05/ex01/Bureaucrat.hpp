#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include "Form.hpp"
# include <iostream>
# include <string>
# include <exception>

class Form;

class Bureaucrat
{
public:
  Bureaucrat(void);
  Bureaucrat(Bureaucrat const & src);
  Bureaucrat(std::string const name, int grade);
  virtual ~Bureaucrat(void);

  Bureaucrat &	   operator=(Bureaucrat const & rhs);
  std::string	    getName(void) const;
  int             getGrade(void) const;
  void			      signForm(Form &form);

private:
  const std::string _name;
  const int         _grade;

  class GradeTooHighException: public std::exception
  {
  public:
      virtual const char* what() const throw()
      {
        return ("Oops ! Grade too high");
      }
  };
  class GradeTooLowException: public std::exception
  {
  public:
      virtual const char* what() const throw()
      {
        return ("Oops ! Grade too low");
      }
  };
};

std::ostream &  operator<<( std::ostream &o, Bureaucrat const &rhs);

#endif
