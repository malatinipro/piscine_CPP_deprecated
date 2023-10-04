/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:26:54 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 12:27:09 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class PresidentialPardonForm: public Form
{
  public:
    PresidentialPardonForm(void);
    PresidentialPardonForm(PresidentialPardonForm const & src);
    PresidentialPardonForm(const std::string target);

    virtual ~PresidentialPardonForm(void);
    PresidentialPardonForm &		operator=(PresidentialPardonForm const & rhs);

    virtual void    execute(Bureaucrat const & executor);
};
#endif
