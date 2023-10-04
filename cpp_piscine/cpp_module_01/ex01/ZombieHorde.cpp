/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ZombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:54:04 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 15:06:14 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

Zombie  *zombieHorde(int N, std::string name)
{
    Zombie *horde;
    horde = new Zombie[N];
    std::stringstream   ss;
    int                 i;

    i = 0;
    while (i < N)
    {
        ss.str(std::string());
        ss << i;
        horde[i].setter_name(name + "_" + ss.str());
        horde[i].announce();
        i++;
    }
    return (horde);
}
