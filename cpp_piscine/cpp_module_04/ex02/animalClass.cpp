/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   animalClass.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:51:12 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 14:51:27 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animalClass.hpp"

Animal::Animal(void)
{
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

std::string	Animal::getType(void) const
{
	return (this->type);
}
