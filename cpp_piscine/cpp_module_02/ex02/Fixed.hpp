/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:07:24 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 12:07:43 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
#include <cmath>

class Fixed {
public:
	Fixed(void);
    Fixed(const int int_to_convert);
    Fixed(const float float_to_convert);
	Fixed(Fixed const & src);
	~Fixed(void);
	Fixed & operator=(Fixed const &rhs);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;

    bool        operator>(Fixed const &rhs) const;
    bool	    operator<(Fixed const & rhs) const;
	bool	    operator>=(Fixed const & rhs) const;
	bool	    operator<=(Fixed const & rhs) const;
	bool	    operator==(Fixed const & rhs) const;
	bool	    operator!=(Fixed const & rhs) const;

    Fixed	    operator+(Fixed const & rhs) const;
	Fixed	    operator-(Fixed const & rhs) const;
	Fixed	    operator*(Fixed const & rhs) const;
	Fixed	    operator/(Fixed const & rhs) const;

	Fixed	    operator++(int);
    Fixed&	    operator++(void);
	Fixed	    operator--(int);
    Fixed&	    operator--(void);

    static Fixed const &	min(Fixed const & f1, Fixed const & f2);
    static Fixed const &	max(Fixed const & f1, Fixed const & f2);
    static Fixed &	min(Fixed & f1, Fixed & f2);
    static Fixed &	max(Fixed & f1, Fixed & f2);

private:
	int 				_fix_point;
	static const int	_fract_bits = 8;
};

std::ostream & operator<<(std::ostream &COUT, Fixed const & rhs);

#endif
