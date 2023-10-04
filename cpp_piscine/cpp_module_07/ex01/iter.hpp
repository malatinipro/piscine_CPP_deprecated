/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:42:33 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 12:42:42 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ITER_HPP
#define ITER_HPP

#include <iostream>

template<typename T>
void my_test(T const &a)
{
  std::cout << static_cast<T>(a + 1) << std::endl;
}

template<typename T>
void iter(T const *array, unsigned int const len, void(*f)(T const &arg))
{
  unsigned int i = 0;
  while (i < len)
  {
    (f)(array[i]);
    i++;
  }
}

#endif
