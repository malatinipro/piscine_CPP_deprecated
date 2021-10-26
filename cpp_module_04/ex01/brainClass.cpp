#include "brainClass.hpp"

Brain::Brain(void)
{
	std::cout << "Brain constructor called" << std::endl;
  return ;
}

Brain::Brain(const Brain &src)
{
  std::cout << "Brain copy constructor called" << std::endl;
	*this = src;
  return;
}

Brain::Brain(const std::string ideas[100])
{
	int	i;

	i = 0;
	while (i < 100)
	{
		this->ideas[i] = ideas[i];
		i++;
	}
	std::cout << "Brain constructor called" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor has been called" << std::endl;
  //pas besoin de liberer les idees puisqu'elles sont sur la stack
}

Brain &				Brain::operator=(Brain const &rhs)
{
	int	i;

	i = 0;
	while (i < 100)
	{
		this->ideas[i] = rhs.ideas[i];
		i++;
	}
	return *this;
}

void	Brain::display_ideas(void) const
{
	int	i;

  i = 0;
	while (i < 100)
	{
		if (this->ideas[i].length())
			std::cout << this->ideas[i] << std::endl;
		i++;
	}
}
