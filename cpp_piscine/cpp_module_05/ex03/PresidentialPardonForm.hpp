/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 20:45:14 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 20:45:50 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class PresidentialPardonForm: public Form
{
  public:
    PresidentialPardonForm(void);
    PresidentialPardonForm(PresidentialPardonForm const &src);
    PresidentialPardonForm(const std::string target);
    virtual ~PresidentialPardonForm(void);
    PresidentialPardonForm  &operator=(PresidentialPardonForm const &rhs);

    virtual void            execute(Bureaucrat const &executor);
};
