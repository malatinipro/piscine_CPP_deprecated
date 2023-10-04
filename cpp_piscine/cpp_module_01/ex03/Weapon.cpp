/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:51:48 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 12:52:19 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Weapon.hpp"

Weapon::Weapon(std::string const & type): _type(type)
{
    return;
}

Weapon::~Weapon(void)
{
    return ;
}

std::string const &Weapon::getType(void) const
{
    return (this->_type);
}

void    Weapon::setType(std::string const &type)
{
    this->_type = type;
}
