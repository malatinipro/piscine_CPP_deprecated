/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:15:56 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 18:38:20 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

    ClapTrap c("Clap");
    FragTrap frag;

    frag.setter_name("Lili");
    lolo.attack("un chat");
    frag.attack("un chien");
    lola.attack("un lapin");
    c.attack("un chat");

    lolo.takeDamage(20);
    frag.takeDamage(13);
    lola.takeDamage(5);
    lolo.beRepaired(12);
    frag.beRepaired(3);
    lola.beRepaired(10);

    frag.highFivesGuys();

    return (0);

}
