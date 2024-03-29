/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:28:01 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 19:08:10 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;
class ShrubberyCreationForm: public Form
{
  public:
    ShrubberyCreationForm();
    ShrubberyCreationForm(ShrubberyCreationForm const &src);
    ShrubberyCreationForm(std::string const target);
    virtual ~ShrubberyCreationForm();
    ShrubberyCreationForm &operator=(ShrubberyCreationForm const &rhs);

    virtual void          execute(Bureaucrat const & executor);
};
