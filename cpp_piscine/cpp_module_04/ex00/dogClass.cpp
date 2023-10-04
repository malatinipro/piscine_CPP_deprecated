/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dogClass.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:40:20 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 14:40:54 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "dogClass.hpp"
#include "animalClass.hpp"

Dog::Dog(void): Animal("Dog")
{
	return ;
}

Dog::Dog(const Dog & src): Animal(src)
{
	return ;
}

Dog::~Dog()
{
	return ;
}

Dog &Dog::operator=(Dog const &rhs)
{
	Animal::operator=(rhs);
	return (*this);
}

void	Dog::makeSound(void) const
{
	std::cout << "WOUFF WOUFF" << std::endl;
	return ;
}
