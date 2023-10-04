/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:51:13 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 15:08:53 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <filesystem>
#include <fstream>

std::string    replace(std::ifstream &in_file, std::ofstream &outstream, std::string s1, std::string s2)
{
    std::string str;
    size_t      found_pos;

    (void)s2;
    bool first = true;
    while (std::getline(in_file, str))
    {
        if (!first)
            outstream << std::endl;
        first = false;
        found_pos = str.find(s1);
        while (found_pos != std::string::npos)
        {
            str.erase(found_pos, s1.length());
            str.insert(found_pos, s2);
            found_pos = str.find(s1);
        }
        outstream << str;
    }
    return (str);
}

int main(void)
{
    std::string s1;
    std::string s2;
    std::string filename;

    std::cout << "Please type the s1: ";
    std::getline(std::cin, s1);
    if (s1.length() == 0)
    {
        std::cout << "Error. Argument empty." << std::endl;
        return (0);
    }
    std::cout << std::endl << "Please type the s2: ";
    std::getline(std::cin, s2);
    if (s2.length() == 0)
    {
        std::cout << "Error. Argument empty." << std::endl;
        return (0);
    }
    std::cout << std::endl <<"Please type the filename without the path: ";
    std::getline(std::cin, filename);
    if (filename.length() == 0)
    {
        std::cout << "Error. Argument empty." << std::endl;
        return (0);
    }
    std::cout << std::endl;
    std::string file_to_open = "./" + filename;
    std::ifstream in_file;
    in_file.open(file_to_open);
    if (in_file.fail())
    {
        std::cerr << "Error opening file" << std::endl;
        return (1);
    }
    std::string new_name = filename + ".replace";
    std::ofstream new_file(new_name);

    replace(in_file, new_file, s1, s2);
    in_file.close();
    new_file.close();
    (void)s2;
    return (0);
}
