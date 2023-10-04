/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:41:53 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 17:56:31 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

template<typename T>
void swap(T &first, T&second)
{
  T tmp;

  tmp = first;
  first = second;
  second = tmp;
}

template<typename T>
T const &min(T const &one, T const &second)
{
  if (one < second)
    return (one);
  return (second);
}

template<typename T>
T const &max(T const &one, T const &second)
{
  if (one > second)
    return (one);
  return (second);
}
