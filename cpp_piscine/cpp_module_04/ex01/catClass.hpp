/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   catClass.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:48:15 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 18:54:43 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "animalClass.hpp"
# include "brainClass.hpp"

class Cat: public Animal
{
  public:
    Cat(void);
    Cat(Cat const &src);
    virtual ~Cat(void);
    Cat   &operator=(Cat const &rhs );
    void  makeSound(void) const;

  private:
    Brain *_brain;
};
