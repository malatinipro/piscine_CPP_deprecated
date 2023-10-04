/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:27:20 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 19:07:39 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include "Form.hpp"

class Form;

class RobotomyRequestForm: public Form
{
  public:
    RobotomyRequestForm(void);
    RobotomyRequestForm(RobotomyRequestForm const &src);
    RobotomyRequestForm(std::string const target);
    virtual ~RobotomyRequestForm(void);
    RobotomyRequestForm &operator=(RobotomyRequestForm const &rhs);

    virtual void        execute(Bureaucrat const &executor);
};
