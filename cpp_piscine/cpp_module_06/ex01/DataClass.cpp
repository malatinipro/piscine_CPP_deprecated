/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DataClass.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:36:22 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 19:24:16 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DataClass.hpp"

Data::Data(void): _value(0)
{
  return ;
}

Data::Data(const Data &src): _value(src._value)
{
  return ;
}

Data::Data(int value): _value(value)
{
  return ;
}

Data::~Data(void)
{
  return ;
}

Data  &Data::operator=(Data const &rhs)
{
  this->_value = rhs._value;
  return *this;
}

int Data::getValue(void) const
{
  return (this->_value);
}
