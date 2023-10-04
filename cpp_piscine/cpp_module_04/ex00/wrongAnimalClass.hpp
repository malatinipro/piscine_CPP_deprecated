/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimalClass.hpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:43:25 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 18:52:30 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

class WrongAnimal
{
  public:
    WrongAnimal(void);
    WrongAnimal(WrongAnimal const &src);
    WrongAnimal(std::string arg_type);
    virtual ~WrongAnimal(void);

    WrongAnimal   &operator=(WrongAnimal const & rhs);
    std::string   getType(void) const;
    void          makeSound(void) const;

  protected:
    std::string type;
};
