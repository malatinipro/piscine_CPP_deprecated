/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:36:54 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 12:37:53 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DataClass.hpp"
#include <iostream>
#include <stdint.h>

class Data;

uintptr_t	serialize(Data* ptr)
{
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw)
{
	return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
  Data  *data_ptr = new Data(10);
  std::cout << "Adress: " << data_ptr << std::endl;
  std::cout << "Value: " << data_ptr->getValue()  << std::endl;;
  uintptr_t ptr = serialize(data_ptr);
  std::cout << ptr << std::endl;
	Data		  *ret = deserialize(ptr);
  std::cout << "Adress: " << ret << std::endl;
  std::cout << "Value: " << ret->getValue() << std::endl;;
  if (ret == data_ptr)
    std::cout << "Yes, our pointers are the same !" << std::endl;
  else
    std::cout << "Oh no, our pointers are different !" << std::endl;
	delete data_ptr;
	return 0;
}
