/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongDogClass.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:44:44 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 14:45:04 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongAnimalClass.hpp"
#include "wrongDogClass.hpp"

WrongDog::WrongDog(void): WrongAnimal("Dog")
{
  return ;
}

WrongDog::WrongDog(const WrongDog & src): WrongAnimal(src)
{
  return ;
}

WrongDog::~WrongDog()
{
  return ;
}

WrongDog &WrongDog::operator=(WrongDog const &rhs )
{
  WrongAnimal::operator=(rhs);
  return (*this);
}

void	WrongDog::makeSound(void) const
{
  std::cout << "WOUFF WOUFF" << std::endl;
  return ;
}
