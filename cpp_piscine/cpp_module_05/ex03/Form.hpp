/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:29:33 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 19:11:18 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

# include "Bureaucrat.hpp"

class Bureaucrat;
class Form
{
  public:
    Form(void);
    Form(Form const &src);
    Form(std::string name, int gexec, int gsign, std::string target);
    Form  &operator=(Form const &rhs);
    virtual ~Form(void);

    const std::string         &getName(void) const;
    const std::string         &getTarget(void) const;
    const int                 &getGsign(void) const;
    const int                 &getGexec(void) const;
    bool                      isSigned(void) const;
    Form                      &beSigned(Bureaucrat const &bur);
    void                      setSign(void);
    virtual void              execute(Bureaucrat const &executor) = 0;

  protected:
    const std::string	        _name;
    bool				              _signed;
    const int     	          _gexec;
    const int		              _gsign;
    std::string     	        _target;

    class GradeTooHighException: public std::exception
    {
      virtual const char *what() const throw()
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
