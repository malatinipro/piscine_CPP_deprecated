/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:05:30 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 18:44:30 by mahautlatin      ###   ########.fr       */
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

Fixed::Fixed(const int i)
{
    this->_fix_point = i << this->_fract_bits;
    return ;
}

Fixed::Fixed(const float f)
{
    this->_fix_point = roundf(f * (1 << _fract_bits));
    return ;
}

int Fixed::toInt(void) const
{
    int result = this->_fix_point >> this->_fract_bits;
    return (result);
}

float Fixed::toFloat(void) const
{
    float result = roundf((this->_fix_point)) / (1 << this->_fract_bits);
    return (result);
}

int Fixed::getRawBits(void) const
{
    return (this->_fix_point);
}

void Fixed::setRawBits(int const raw)
{
    this->_fix_point = raw;
    return ;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
    this->_fix_point = rhs.getRawBits();
    return (*this);
}

std::ostream &operator<<(std::ostream &COUT, Fixed const &rhs)
{
    COUT << rhs.toFloat();
    return (COUT);
}

bool    Fixed::operator>(Fixed const &rhs) const
{
    return (this->_fix_point > rhs._fix_point);
}

bool    Fixed::operator>=(Fixed const &rhs) const
{
    return (this->_fix_point >= rhs._fix_point);
}

bool    Fixed::operator<(Fixed const &rhs) const
{
    return (this->_fix_point < rhs._fix_point);
}

bool    Fixed::operator<=(Fixed const &rhs) const
{
    return (this->_fix_point <= rhs._fix_point);
}

bool    Fixed::operator==(Fixed const &rhs) const
{
    return (this->_fix_point == rhs._fix_point);
}

bool    Fixed::operator!=(Fixed const &rhs) const
{
    return (this->_fix_point != rhs._fix_point);
}

Fixed   Fixed::operator+(Fixed const &rhs) const
{
    Fixed result = (this->toFloat() + rhs.toFloat());
    return (result);
}

Fixed   Fixed::operator-(Fixed const &rhs) const
{
    Fixed result = (this->toFloat() - rhs.toFloat());
    return (result);
}

Fixed   Fixed::operator*(Fixed const &rhs) const
{
    Fixed result = (this->toFloat() * rhs.toFloat());
    return (result);
}

Fixed   Fixed::operator/(Fixed const &rhs) const
{
    Fixed result = (this->toFloat() / rhs.toFloat());
    return (result);
}

Fixed   Fixed::operator++(int)
{
    Fixed temp = *this;
    (this->_fix_point)++;
    return (temp);
}

Fixed   Fixed::operator--(int)
{
    Fixed temp = *this;
    (this->_fix_point)--;
    return (temp);
}

Fixed &Fixed::operator++(void)
{
    this->_fix_point++;
    return (*this);
}

Fixed &Fixed::operator--(void)
{
    this->_fix_point--;
    return (*this);
}

Fixed const &Fixed::min(Fixed const &f1, Fixed const &f2)
{
    if (f1 < f2)
        return (f1);
    return (f2);
}

Fixed const &Fixed::max(Fixed const &f1, Fixed const &f2)
{
    if (f1 > f2)
        return (f1);
    return (f2);
}

Fixed   &Fixed::min(Fixed & f1, Fixed & f2)
{
    if (f1 < f2)
        return (f1);
    return (f2);
}

Fixed   &Fixed::max(Fixed & f1, Fixed & f2)
{
    if (f1 > f2)
        return (f1);
    return (f2);
}

/*Overloads des fonctions min et max*/
Fixed const &min(Fixed const & f1, Fixed const & f2)
{
     if (f1 < f2)
        return (f1);
    return (f2);
}

Fixed const &max(Fixed const & f1, Fixed const & f2)
{
     if (f1 > f2)
        return (f1);
    return (f2);
}

Fixed &min(Fixed & f1, Fixed & f2)
{
     if (f1 < f2)
        return (f1);
    return (f2);
}

Fixed &max(Fixed & f1, Fixed & f2)
{
     if (f1 > f2)
        return (f1);
    return (f2);
}
