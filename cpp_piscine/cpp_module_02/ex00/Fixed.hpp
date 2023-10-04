/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:03:47 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 15:12:16 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class Fixed
{
	public:
		Fixed(void);
		Fixed(Fixed const & src);
		~Fixed(void);
		Fixed & operator=(Fixed const &f);

		int		getRawBits(void) const;
		void	setRawBits(int const raw);

	private:
		int 				_fix_point;
		static const int	_fract_bits;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);
