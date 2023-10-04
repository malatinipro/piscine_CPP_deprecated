/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCatClass.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:44:36 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 14:44:42 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include "wrongAnimalClass.hpp"

class WrongCat: public WrongAnimal
{
  public:
    WrongCat(void);
    WrongCat(WrongCat const &src);
    virtual ~WrongCat(void);
    WrongCat &			operator=(WrongCat const &rhs );
    void	makeSound(void) const;
};
