/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:53:45 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 15:06:39 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

int main(void)
{
    std::string str("HI THIS IS BRAIN");
    std::string *stringPTR = &str;
    std::string &stringREF = str;

    std::cout << "La valeur de string est : " << str << std::endl;
    std::cout << "La valeur de string via le pointeur dereference est : " <<
        *stringPTR << std::endl;
    std::cout << "La valeur de string via la reference est : " <<
        stringREF << std::endl;
    return (0);
}
