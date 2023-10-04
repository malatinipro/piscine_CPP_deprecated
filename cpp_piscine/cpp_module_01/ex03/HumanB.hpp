/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:52:23 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 15:07:47 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "./Weapon.hpp"
# include <iostream>

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
