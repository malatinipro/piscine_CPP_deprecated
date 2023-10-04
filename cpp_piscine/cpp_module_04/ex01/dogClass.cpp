/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dogClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:48:25 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 14:48:52 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dogClass.hpp"
#include "animalClass.hpp"

Dog::Dog(void): Animal("Dog")
{
	this->_brain = new Brain;
	return ;
}

Dog::Dog(const Dog & src): Animal(src), _brain(new Brain(*src._brain))
{
	return ;
}

Dog::~Dog()
{
	delete this->_brain;
	return ;
}

Dog &Dog::operator=(Dog const &rhs)
{
	Animal::operator=(rhs);
	*_brain = *rhs._brain;
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "WOUFF WOUFF" << std::endl;
	return ;
}
