/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:07:46 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 18:44:47 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Fixed.hpp"

Fixed const &min(Fixed const & f1, Fixed const & f2);
Fixed const &max(Fixed const & f1, Fixed const & f2);

Fixed   &min(Fixed & f1, Fixed & f2);
Fixed   &max(Fixed & f1, Fixed & f2);

int main(void)
{
    Fixed a;
    Fixed const b(Fixed(5.05f) * Fixed(2));
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    Fixed const c(2);
    Fixed const d(5);
    std::cout << Fixed::max(a, b) << std::endl;

    std::cout << Fixed::min(a, b) << std::endl;
    std::cout << max(a, b) << std::endl;
    std::cout << min(a, b) << std::endl;
    std::cout << max(c, d) << std::endl;
    std::cout << min(c, d) << std::endl;

    std::cout << a << std::endl;
    std::cout << a-- << std::endl;
    std::cout << a << std::endl;
    std::cout << --a << std::endl;
    std::cout << a << std::endl;

    std::cout << c + d << std::endl;

    std::cout << c - d << std::endl;

    std::cout << c * d << std::endl;

    std::cout << c / d << std::endl;

    std::cout << (c > d) << std::endl;
    std::cout << (c < d) << std::endl;
    std::cout << (c >= d) << std::endl;
    std::cout << (c <= d)<< std::endl;
    std::cout << (c == d) << std::endl;
    std::cout << (c != d) << std::endl;
    return 0;
}
