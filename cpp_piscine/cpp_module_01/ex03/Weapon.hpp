/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:51:57 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 15:08:43 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iostream>

class Weapon
{
    public:
        Weapon();
        Weapon(std::string const &type);
        ~Weapon();

        void                setType(std::string const &type);
        std::string const   &getType(void) const;

    private:
        std::string _type;
};
