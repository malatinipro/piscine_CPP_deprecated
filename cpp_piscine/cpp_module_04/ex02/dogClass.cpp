/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dogClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:53:21 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 14:53:51 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dogClass.hpp"
#include "animalClass.hpp"
#include "brainClass.hpp"

Dog::Dog(void): _brain(new Brain())
{
	this->type = "Dog";
	return ;
}

Dog::Dog(const Dog & src): Animal(src), _brain(new Brain(*src._brain))
{
	return ;
}

Dog::~Dog(void)
{
	delete _brain;
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
