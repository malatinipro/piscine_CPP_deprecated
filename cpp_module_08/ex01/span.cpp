#include "span.hpp"
#include <iostream>
#include <string>

Span::Span(void) : _N(0)
{
  std::cout << "Default constructor called" << std::endl;
  return;
}

Span::Span(unsigned int N) : _N(N)
{
  std::cout << "One parameter constructor called" << std::endl;
  return ;
}

Span::Span(Span const & src)
{
  std::cout << "Copy constructor called" << std::endl;
	this->_N = src._N;
  this->_numbers = src._numbers;
	return ;
}

Span::~Span()
{
  std::cout << "Destructor called" << std::endl;
  return ;
}

Span & Span::operator=(Span const &src)
{
  std::cout << "Assignation operator called" << std::endl;
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
    //On va pouvoir ajouter facilement un élément
		this->_numbers.push_back(n);
	else
		throw (std::runtime_error(std::string("Vector is already full. ")));
}

unsigned int Span::longestSpan(void) const
{
  // If there are no numbers stored, or only one, there is no span to find
  //and you will throw an exception.
	if (this->_numbers.size() < 2)
		throw (std::runtime_error(std::string("There is not span to find. ")));
	return (*std::max_element(this->_numbers.begin(), this->_numbers.end()) - *std::min_element(this->_numbers.begin(), this->_numbers.end()));
}

void display(std::vector<int> &v)
{
    for(size_t i = 0; i<v.size(); i++)
    {
        std::cout << v[i] << " ";
    }
    std::cout << "\n" << std::endl;
}

unsigned int Span::shortestSpan(void) const
{
	if (this->_numbers.size() < 2)
		throw (std::runtime_error(std::string("There is not span to find. ")));
  /*
  ** Pour trouver le plus petit span on a besoin de trier le vector
  ** pour ca on va trier une copie
  */
	std::vector<int> to_sort = this->_numbers;
	std::sort(to_sort.begin(), to_sort.end());

  display(to_sort);
  /*
	for (unsigned long i = 0; i < this->_numbers.size() - 1; i++)
		tosort[i] = tosort[i+1] - tosort[i];
	return (*std::min_element(tosort.begin(), tosort.end() - 1));
  */
  return (0);
}

std::ostream & operator<<(std::ostream &o, Span const &rhs)
{
  (void)rhs;
	//std::cout << rhs.getLength() << std::endl;
	return o;
}
