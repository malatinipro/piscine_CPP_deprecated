/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 18:27:35 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 18:28:08 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include <cstring>
#include "./Zombie.hpp"

int main(void)
{
    std::string number;
    std::string name;
    int num = 0;

    std::cout << "Let's create a horde of Zombies" << std::endl;
    std::cout << "Enter the number of zombies you are looking for : ";
    std::getline(std::cin, number);
    std::stringstream ss(number);
    ss >> num;

    if (ss.fail())
    {
        std::cout << "Error." << std::endl;
        return (0);
    }
    std::cout << std::endl;
    std::cout << "Great ! Now tell us the name for the horde: ";
    std::getline(std::cin, name);
    std::cout << std::endl << "The horde will be constructed and destructed verbosely." << std::endl;
    Zombie *horde = zombieHorde(num, name);
    delete [] horde;
}
