/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:04:35 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 15:13:19 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

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

Fixed::Fixed(const int i)
{
	this->_fix_point = i << this->_fract_bits;
}

Fixed::Fixed(const float f)
{
	this->_fix_point = roundf(f * (1 << _fract_bits));
}

int Fixed::toInt(void) const
{
	return (this->_fix_point >> this->_fract_bits);
}

float Fixed::toFloat(void) const
{
	return (roundf((this->_fix_point)) / (1 << this->_fract_bits));
}

std::ostream & operator<<(std::ostream & COUT, Fixed const & rhs)
{
	COUT << rhs.toFloat();
	return (COUT);
}
