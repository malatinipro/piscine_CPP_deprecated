/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:03:26 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 15:11:58 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

const int	Fixed::_fract_bits = 8;

Fixed::Fixed(void): _fix_point(0)
{
	return ;
}

Fixed::Fixed(const Fixed &src)
{
	*this = src;
	return ;
}

Fixed::~Fixed()
{
	return ;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	this->_fix_point = rhs.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const
{
	return (this->_fix_point);
}

void Fixed::setRawBits(int const raw)
{
	this->_fix_point = raw;
}
