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
    //On va lire ligne par ligne
    while (std::getline(in_file, str))
    {
        if (!first)
            outstream << std::endl;
        first = false;
        //std::cout << "La ligne lue est: " << str << std::endl;
        found_pos = str.find(s1);
        //Equivalent backslash 0
        while (found_pos != std::string::npos)
        {
            //std::cout << "On doit faire le remplacement" << std::endl;
            str.erase(found_pos, s1.length());
            str.insert(found_pos, s2);
            found_pos = str.find(s1);
        }
        outstream << str;
    }
    return (str);
}

//https://en.cppreference.com/w/cpp/io/basic_fstream
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
    /* Travailler sur des fichiers plutot que sur des sorties standards */
    /*Lecture - creation d une instance de filestream file */
    std::ifstream in_file;
    /* On pourra tester avec les autres fichiers */
    in_file.open(file_to_open);
    //Check if the file exits, if it is corrupted etc 
    if (in_file.fail())
    {
        std::cerr << "Error opening file" << std::endl;
        return (1);
    }
    /* Ecriture */
    std::string new_name = filename + ".replace";
    std::ofstream new_file(new_name);

    replace(in_file, new_file, s1, s2);
    in_file.close();
    new_file.close();
    (void)s2;
    return (0);
}