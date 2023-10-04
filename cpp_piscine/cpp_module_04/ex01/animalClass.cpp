/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animalClass.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:45:26 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 14:45:51 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animalClass.hpp"

Animal::Animal(void): type("Animal")
{
	return ;
}

Animal::Animal(std::string arg_type)
{
	this->type = arg_type;
	return ;
}

Animal::Animal(const Animal & src): type(src.type)
{
	return ;
}

Animal::~Animal(void)
{
	return ;
}

Animal &Animal::operator=(Animal const &rhs)
{
	this->type = rhs.type;
	return (*this);
}

void	Animal::makeSound(void) const
{
	std::cout << "* ANIMAL SOUND *" << std::endl;
	return ;
}

std::string	Animal::getType(void) const
{
	return (this->type);
}
