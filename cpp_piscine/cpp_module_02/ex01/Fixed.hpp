/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:05:12 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 12:05:13 by mahautlatin      ###   ########.fr       */
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

private:
	int 				_fix_point;
	static const int	_fract_bits = 8;
};

std::ostream & operator<<(std::ostream &COUT, Fixed const & rhs);

#endif
