/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:55:35 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 12:55:59 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <sstream>
#include "./Zombie.hpp"

bool is_number(const std::string& s)
{
    return( strspn( s.c_str(), "-.0123456789" ) == s.size() );
}

int main(void)
{
    std::string         number;
    std::string         name;
    std::stringstream   ss;
    int                 num;
    num = 0;
    std::getline(std::cin, number);
    std::cout << std::endl;
    int number_len;
    number_len = number.length();
    int i = 0;
    while (i < number_len)
    {
        if (is_number(number)== false)
        {
            std::cout << "Number is incorrect. Retry next time." << std::endl;
            return (1);
        }
        i++;
    }
    std::getline(std::cin, name);
    int num_int = stoi(number);
    Zombie *horde = zombieHorde(num_int, name);
    delete [] horde;
}
