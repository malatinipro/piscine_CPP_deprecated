/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   catClass.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:40:01 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 14:40:18 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "animalClass.hpp"

class Cat: public Animal
{
  public:
    Cat(void);
    Cat(Cat const &src);
    virtual ~Cat(void);
    Cat &			operator=(Cat const &rhs );
    void	makeSound(void) const;
};
