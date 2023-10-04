/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   catClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:39:10 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 18:50:48 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animalClass.hpp"
#include "catClass.hpp"

Cat::Cat(void): Animal("Cat")
{
  return ;
}

Cat::Cat(const Cat & src): Animal(src)
{
  return ;
}

Cat::~Cat()
{
  return ;
}

Cat &Cat::operator=(Cat const &rhs )
{
  Animal::operator=(rhs);
  return (*this);
}

void	Cat::makeSound(void) const
{
  std::cout << "MAAAOOOWWWW" << std::endl;
  return ;
}
