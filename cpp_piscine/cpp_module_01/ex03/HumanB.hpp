/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:52:23 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 12:52:33 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "./Weapon.hpp"
#include <iostream>

class HumanB
{
    public:
        HumanB(std::string name);
        ~HumanB(void);

        void    attack(void);
        void    setWeapon(Weapon &type);

    private:
        std::string _name;
        Weapon  *_weapon;
};

#endif
