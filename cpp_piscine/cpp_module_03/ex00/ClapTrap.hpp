/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:12:41 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 15:17:54 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>

class ClapTrap
{
    public:
        ClapTrap(void);
        ClapTrap(ClapTrap const &src);
        ClapTrap(std::string name);
        ~ClapTrap(void);
        ClapTrap & operator=(ClapTrap const &rhs);

        void            attack(std::string const &target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);

        void           setter_name(std::string name);
        std::string    getter_name(void);

    private:
        std::string         _name;
        unsigned int        _hit_points;
        unsigned int        _energy_points;
        unsigned int        _attack_damage;
};
