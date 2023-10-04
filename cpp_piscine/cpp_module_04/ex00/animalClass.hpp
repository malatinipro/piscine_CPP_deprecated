/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animalClass.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:38:25 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 18:50:43 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class Animal
{
  public:
    Animal(void);
    Animal(Animal const &src);
    Animal(std::string arg_type);
    virtual ~Animal(void);

    Animal        &operator=( Animal const & rhs );
    std::string		getType(void) const;
    virtual void	makeSound(void) const;

  protected:
    std::string type;
};
