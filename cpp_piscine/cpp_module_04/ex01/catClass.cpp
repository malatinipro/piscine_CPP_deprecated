/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   catClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:47:38 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 14:48:05 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animalClass.hpp"
#include "catClass.hpp"

Cat::Cat(void): Animal("Cat")
{
  this->_brain = new Brain;
  return ;
}

Cat::Cat(const Cat & src): Animal(src), _brain(new Brain(*src._brain))
{
  return ;
}

Cat::~Cat(void)
{
  delete this->_brain;
  return ;
}

Cat &Cat::operator=(Cat const &rhs )
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
