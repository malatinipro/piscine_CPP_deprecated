/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:56:18 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 12:56:22 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>

class Zombie
{
    public:
        Zombie(void);
        Zombie (std::string name);
        ~Zombie(void);
        void        setter_name(std::string);
        std::string getter_name(void) const;
        void       announce(void) const;

    private:
        std::string _name;
};


void    randomChump(std::string name);
Zombie  *newZombie(std::string name);

#endif
