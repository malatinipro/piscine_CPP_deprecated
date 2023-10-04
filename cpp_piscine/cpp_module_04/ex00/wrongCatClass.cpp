/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongCatClass.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:43:52 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 14:44:24 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongAnimalClass.hpp"
#include "wrongCatClass.hpp"

WrongCat::WrongCat(void): WrongAnimal("Cat")
{
  return ;
}

WrongCat::WrongCat(const WrongCat & src): WrongAnimal(src)
{
  return ;
}

WrongCat::~WrongCat()
{
  return ;
}

WrongCat &WrongCat::operator=(WrongCat const &rhs )
{
  WrongAnimal::operator=(rhs);
  return (*this);
}

void	WrongCat::makeSound(void) const
{
  std::cout << "MAAAOOOWWWW" << std::endl;
  return ;
}
