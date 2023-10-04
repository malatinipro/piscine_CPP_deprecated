/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:19:22 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 12:20:33 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
    const std::string	getName(void) const;
    int               getGrade(void) const;

    void			incGrade(void);
    void			decGrade(void);

  private:
    const std::string _name;
    int         _grade;

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

std::ostream & operator<<( std::ostream &o, Bureaucrat const &rhs);

#endif
