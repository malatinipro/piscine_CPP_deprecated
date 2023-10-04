/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:12:45 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 12:12:46 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
    std::cout << "----------- CONSTRUCTION ----------" << std::endl;
    ClapTrap buddie("Buddie");
    ClapTrap no_name;

    no_name.setter_name("No name");

    ClapTrap buddie2;
    buddie2 = buddie;
    std::cout << "------------ GAME ----------" << std::endl;
    std::cout << "----------- attack ----------" << std::endl;
    buddie.attack("un chat");
    buddie2.attack("un chien");
    no_name.attack("un lapin");
    std::cout << "----------- take damage ----------" << std::endl;
    buddie.takeDamage(20);
    buddie2.takeDamage(0);
    no_name.takeDamage(5);
    std::cout << "----------- be repaired ----------" << std::endl;
     buddie.beRepaired(20);
    buddie2.beRepaired(0);
    no_name.beRepaired(5);
    std::cout << "buddie2 is called " << buddie.getter_name() << std::endl;
    std::cout << "----------- DESTRUCTION ----------" << std::endl;
}
