/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainClass.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:51:54 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 14:52:21 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "brainClass.hpp"

Brain::Brain(void)
{
	return ;
}

Brain::Brain(const Brain &src)
{
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
}

Brain::~Brain(void)
{
	return ;
}

Brain &Brain::operator=(Brain const &rhs)
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
