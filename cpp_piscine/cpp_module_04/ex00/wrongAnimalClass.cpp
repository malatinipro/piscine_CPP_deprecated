/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   wrongAnimalClass.cpp                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:42:58 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 14:43:21 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "wrongAnimalClass.hpp"

WrongAnimal::WrongAnimal(void): type("Animal")
{
	return ;
}

WrongAnimal::WrongAnimal(std::string arg_type)
{
	this->type = arg_type;
	return ;
}

WrongAnimal::WrongAnimal(const WrongAnimal & src)
{
	*this = src;
	return ;
}

WrongAnimal::~WrongAnimal(void)
{
	return ;
}

WrongAnimal &WrongAnimal::operator=(WrongAnimal const &rhs)
{
	this->type = rhs.type;
	return (*this);
}

void	WrongAnimal::makeSound(void) const
{
	std::cout << "* WRONG ANIMAL SOUND *" << std::endl;
	return ;
}

std::string	WrongAnimal::getType(void) const
{
	return (this->type);
}
