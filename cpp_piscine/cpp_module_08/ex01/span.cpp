/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:00:26 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 18:01:13 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "span.hpp"
#include <iostream>
#include <string>
#include <cmath>
#include <algorithm>

Span::Span(void) : _N(0)
{
	return;
}

Span::Span(unsigned int N) : _N(N)
{
	return ;
}

Span::Span(Span const & src)
{
	this->_N = src._N;
	this->_numbers = src._numbers;
	return ;
}

Span::~Span()
{
	return ;
}

Span & Span::operator=(Span const &src)
{
	this->_N = src._N;
	this->_numbers = src._numbers;
	return *this;
}

unsigned int Span::getN(void) const
{
	return (this->_N);
}

void Span::addNumber(int n)
{
	if (this->_numbers.size() < this->_N)
		this->_numbers.push_back(n);
	else
		throw (std::runtime_error(std::string("Error. We have already N elements.")));
}

void Span::addRangeNumber(int a, int b)
{
	long size = b - a;
	if (this->_numbers.size() + abs(size) >= this->_N)
		throw (std::runtime_error(std::string("Error. We have already N elements.")));
	for (int i = a; i <= b; i++)
		this->_numbers.push_back(i);
}

unsigned int Span::longestSpan(void) const
{
	if (this->_numbers.size() < 2)
		throw (std::runtime_error(std::string("Error. There is not span to find.")));
	return (*std::max_element(this->_numbers.begin(), this->_numbers.end())
		- *std::min_element(this->_numbers.begin(), this->_numbers.end()));
}

void Span::display(void) const
{
	for (std::vector<int>::const_iterator it = this->_numbers.begin();
		it != this->_numbers.end(); it++)
	{
		std::cout << *it << std::endl;
	}
}

unsigned int Span::shortestSpan(void) const
{
	if (this->_numbers.size() < 2)
		throw (std::runtime_error(std::string("There is no span to find. ")));
	std::vector<int> to_sort(this->_numbers);
	long span = abs(_numbers[0] - _numbers[1]);
	for (std::vector<int>::const_iterator it = this->_numbers.begin();
		it != this->_numbers.end(); it++)
	{
		for (std::vector<int>::const_iterator jt = it + 1;
			jt != this->_numbers.end(); jt++)
		{
			if (span > static_cast<long>(abs(*it - *jt)))
				span = static_cast<long>(abs(*it - *jt));
		}
	}
  return (span);
}

std::ostream & operator<<(std::ostream &o, Span const &rhs)
{
	(void)rhs;
	return o;
}
