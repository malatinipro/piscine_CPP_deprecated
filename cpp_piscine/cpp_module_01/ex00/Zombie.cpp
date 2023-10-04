/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:56:27 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 12:56:42 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie::Zombie(void)
{
    return ;
}

Zombie::Zombie(std::string name)
{
    this->_name = name;
    return ;
}

Zombie::~Zombie(void)
{
    std::cout << this->_name << " has been destroyed" << std::endl;
}

void    Zombie::setter_name(std::string name)
{
    this->_name = name;
}

std::string    Zombie::getter_name(void) const
{
    return (this->_name);
}

void    Zombie::announce(void) const
{
    std::string name = this->getter_name();
    std::cout << name << " " << "BraiiiiiiinnnzzzZ..." << std::endl;
}
