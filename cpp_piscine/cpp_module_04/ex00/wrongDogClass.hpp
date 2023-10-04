/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongDogClass.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:45:12 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 14:45:20 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "wrongAnimalClass.hpp"

class WrongDog: public WrongAnimal
{
  public:
    WrongDog(void);
    WrongDog(WrongDog const &src);
    virtual ~WrongDog(void);
    WrongDog &			operator=(WrongDog const &rhs );
    void	makeSound(void) const;
};
