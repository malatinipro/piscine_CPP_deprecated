/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:13:54 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 18:36:30 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
    ClapTrap buddie("Buddie");
    ClapTrap no_name;

    no_name.setter_name("No name");

    ClapTrap buddie2;

    buddie2 = buddie;
    buddie.attack("un chat");
    buddie2.attack("un chien");
    no_name.attack("un lapin");

    buddie.takeDamage(20);
    buddie2.takeDamage(0);
    no_name.takeDamage(5);

    buddie.beRepaired(20);
    buddie2.beRepaired(0);
    no_name.beRepaired(5);

    std::cout << std::endl;

    ScavTrap scav;
    ScavTrap lola("Lola");
    ScavTrap lolo("Lolo");
    scav.setter_name("Lili");

    lolo.takeDamage(20);
    scav.takeDamage(13);
    lola.takeDamage(5);

    lolo.beRepaired(12);
    scav.beRepaired(3);
    lola.beRepaired(10);

    lolo.guardGuate();
    scav.guardGuate();
    lola.guardGuate();
    return (0);

}
