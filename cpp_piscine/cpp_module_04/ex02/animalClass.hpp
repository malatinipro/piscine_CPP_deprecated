/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animalClass.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:51:32 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 14:51:45 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

class Animal
{
  public:
    Animal(void);
    Animal(Animal const &src);
    virtual ~Animal(void);

    Animal &		operator=( Animal const & rhs );
    std::string		getType(void) const;
    virtual void	makeSound(void) const = 0;

  protected:
    std::string type;
};
