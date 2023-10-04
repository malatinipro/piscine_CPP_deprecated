/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:30:36 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 19:11:55 by mahautlatin      ###   ########.fr       */
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
    Intern  &operator=(Intern const & rhs);
    Form  *makeForm(std::string name, std::string target);
};
