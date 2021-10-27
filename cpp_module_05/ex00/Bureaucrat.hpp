#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include <string>
# include <exception>

class Bureaucrat
{
public:
  Bureaucrat(void);
  Bureaucrat(Bureaucrat const & src);
  Bureaucrat(std::string const name, int grade);
  virtual ~Bureaucrat(void);

  Bureaucrat &	operator=(Bureaucrat const & rhs);
  //accessors
  std::string	getName(void) const;
  int         getGrade(void) const;
  //Modifier le grade du Bureaucrat
  void			incGrade(void);
  void			decGrade(void);
private:
  std::string _name;
  int         _grade;

/*
** Les classes d'erreurs auraient pu etre imlementees
** dans le main. Ici on en profite pour faire une nested class.
*/

  //https://www.geeksforgeeks.org/g-fact-60/
  //https://riptutorial.com/cplusplus/example/23640/custom-exception
  //on aurait pu rajouter le mot cle virtual ici
  class GradeTooHighException: public std::exception
  {
  public:
    /** Returns a pointer to the (constant) error description.
     *  @return A pointer to a const char*. The underlying memory
     *  is in possession of the Except object. Callers must
     *  not attempt to free the memory.
     */
      virtual const char* what() const throw() {
        return ("Oops ! Grade too high");
      }
  };

  class GradeTooLowException: public std::exception
  {
  public:
      virtual const char* what() const throw() {
        return ("Oops ! Grade too low");
      }
  };
};

std::ostream &  operator<<( std::ostream &o, Bureaucrat const &rhs);

#endif
