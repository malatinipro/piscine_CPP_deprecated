#include <string>
#include <iostream>
#include <sstream>
#include "./Zombie.hpp"

/* Trouve sur stack overflow, verifier si une string est constituee de chiffres*/
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

    std::cout << "Let's create a horde of Zombies" << std::endl;
    std::cout << "Enter the number of zombies you are looking for : ";
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
    std::cout << "Great ! Now tell us the name for the horde: ";
    std::getline(std::cin, name);
    std::cout << std::endl << "The horde will be constructed and destructed verbosely." << std::endl;
    int num_int = stoi(number);
    //Allocation
    Zombie *horde = zombieHorde(num_int, name);
    //Seule facon de free un tableau - Destruction
    delete [] horde;
}