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

/*
int		Span::operator[](std::vector<int> it)
{
  return (this[*it]);
}
*/

//On va pouvoir afficher le vector qui se trouve a l interieur de notre span
void Span::display(void) const
{
    for (std::vector<int>::const_iterator it = this->_numbers.begin(); it != this->_numbers.end(); it++)
    {
      std::cout << *it << std::endl;
    }
    std::cout << std::endl;
}

//Fonction pour afficher un vecteur (simple)
void display_vector(std::vector<int> &v)
{
  for (std::vector<int>::iterator it = v.begin(); it != v.end(); it++)
  {
    std::cout << *it << std::endl;
  }
}

unsigned int Span::shortestSpan(void) const
{
	if (this->_numbers.size() < 2)
		throw (std::runtime_error(std::string("There is not span to find. ")));
  /*
  ** Pour trouver le plus petit span on a besoin de trier le vector
  ** pour ca on va trier une copie
  */
	std::vector<int> to_sort(this->_numbers);
  std::cout << "-------------------------------" << std::endl;
  std::cout << "Let's see the current collection" << std::endl;
  std::cout << "-------------------------------" << std::endl;
  this->display();
  std::cout << "-------------------------------" << std::endl;
	std::sort(to_sort.begin(), to_sort.end());

  //La on peut voir que notre vecteur a bien ete trie
  std::cout << "-------------------------------" << std::endl;
  std::cout << "Let's see the collection now sorted" << std::endl;
  std::cout << "-------------------------------" << std::endl;
  display_vector(to_sort);
  std::cout << "-------------------------------" << std::endl;
  std::cout << "Let's find the shorted span" << std::endl;

  //Pour se faire (joliment), on va utiliser un iterator
  //Maintenant il faut le parcourir pour trouver le plus petit ecart
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
