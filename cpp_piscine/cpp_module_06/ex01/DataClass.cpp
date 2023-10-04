/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DataClass.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:36:22 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 12:36:32 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DataClass.hpp"

//TODO: fixme
Data::Data(void): _value(0)
{
  std::cout << "Data default constructor called" << std::endl;
  return ;
}

Data::Data(const Data & src): _value(src._value)
{
  std::cout << "Data copy constructor called" << std::endl;
  return ;
}

Data::Data(int value): _value(value)
{
  std::cout << "Data constructor called" << std::endl;
  return ;
}

Data::~Data(void)
{
  std::cout << "Data destructor called" << std::endl;
  return ;
}

Data &				Data::operator=(Data const & rhs)
{
  std::cout << "Data assignation operator called" << std::endl;
	this->_value = rhs._value;
	return *this;
}

int			Data::getValue(void) const
{
	return (this->_value);
}
