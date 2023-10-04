/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   catClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:52:44 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 18:56:21 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animalClass.hpp"
#include "catClass.hpp"
#include "brainClass.hpp"

Cat::Cat(void): _brain(new Brain())
{
  this->type = "Cat";
  return ;
}

Cat::Cat(const Cat &src): Animal(src), _brain(new Brain(*src._brain))
{
  return ;
}

Cat::~Cat(void)
{
  delete this->_brain;
  return ;
}

Cat &Cat::operator=(Cat const &rhs)
{
  Animal::operator=(rhs);
  *_brain = *rhs._brain;
  return (*this);
}

void	Cat::makeSound(void) const
{
	std::cout << "MAAAOOOWWWW" << std::endl;
  return ;
}
