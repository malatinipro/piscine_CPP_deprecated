/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:50:01 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 12:50:09 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Karen.hpp"

Karen::Karen(void)
{
    return ;
}

Karen::~Karen(void)
{
    return ;
}

void	Karen::_debug(void) const
{
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::_info(void) const
{
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::_warning(void) const
{
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::_error(void) const
{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

void    Karen::complain(std::string level) const
{
    if (level != "INFO" && level != "DEBUG" && level != "WARNING" && level != "ERROR")
		return ;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    /* Creation d'un tableau de fonctions */
    void(Karen::*f[4]) () const = {&Karen::_debug, &Karen::_info, &Karen::_warning, &Karen::_error};
    int i = 0;
    while (i < 4)
    {
        if (levels[i] == level)
            (this->*f[i])();
        i++;
    }

}
