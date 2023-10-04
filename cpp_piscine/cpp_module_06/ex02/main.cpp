/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:38:07 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 17:55:45 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <stdlib.h>
#include <ctime>

class Base
{
	public:
		virtual ~Base(){}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base	*generate(void)
{
	Base *base_ptr;
	std::srand(std::time(NULL));
  	int nb = std::rand();
  	if (nb % 3 == 0)
	{
		base_ptr = new A;
		std::cout << "Rand made us create a A instance" << std::endl;
	}
  	else if (nb % 3 == 1)
	{
		base_ptr = new B;
		std::cout << "Rand made us create a B instance" << std::endl;
	}
  	else
	{
		std::cout << "Rand made us create a C instance" << std::endl;
		base_ptr = new C;
	}
	return (base_ptr);
}

void 	identify(Base *p)
{
	A * a = dynamic_cast<A *>(p);
	B * b = dynamic_cast<B *>(p);
	C * c = dynamic_cast<C *>(p);
	if (a != NULL)
		std::cout << "A";
	if (b != NULL)
		std::cout << "B";
	if (c != NULL)
		std::cout << "C";
	std::cout << std::endl;
}

void	identify( Base & p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		(void)a;
	}
	catch (...){;}
	try
	{
		B & b = dynamic_cast<B &>(p);
		(void)b;
	}
	catch (...){;}

	try
	{
		C & c = dynamic_cast<C &>(p);
		(void)c;
	}
	catch (...){;}
}

int	main(void)
{
	Base *test = generate();
	identify(test);
	identify(*test);
	delete test;
	return (0);
}
