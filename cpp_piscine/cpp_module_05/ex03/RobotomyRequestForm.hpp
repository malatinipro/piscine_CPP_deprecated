/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:33:18 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 19:13:15 by mahautlatin      ###   ########.fr       */
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
    virtual void  execute(Bureaucrat const &executor);
};
