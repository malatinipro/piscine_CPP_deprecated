/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:22:09 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 20:30:43 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "Form.hpp"

# include <iostream>
# include <string>
# include <exception>

class Form;

class Bureaucrat
{
  public:
    Bureaucrat(void);
    Bureaucrat(Bureaucrat const &src);
    Bureaucrat(std::string const name, int grade);
    virtual ~Bureaucrat(void);
    Bureaucrat        &operator=(Bureaucrat const &rhs);

    std::string	      getName(void) const;
    int               getGrade(void) const;
    void			        signForm(Form &form);

  private:
    const std::string _name;
    int               _grade;

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

std::ostream  &operator<<( std::ostream &o, Bureaucrat const &rhs);
