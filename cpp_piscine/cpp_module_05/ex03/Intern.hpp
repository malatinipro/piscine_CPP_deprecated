/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 20:41:20 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 20:42:04 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern
{
  public:
    Intern();
    Intern(Intern const &src);
    virtual ~Intern();
    Intern  &operator=(Intern const &rhs);
    Form  *makeForm(std::string name, std::string target);
};
