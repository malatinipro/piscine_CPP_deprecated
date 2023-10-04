#include "Karen.hpp"

Karen::Karen(void)
{
    return ;
}

Karen::~Karen(void)
{
    return ;
}

void	Karen::_debug(void) const
{
    std::cout << "[DEBUG]" << std::endl;
	std::cout << "I love to get extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger. I just love it!" << std::endl;
}

void	Karen::_info(void) const
{
    std::cout << "[INFO]" << std::endl;
	std::cout << "I cannot believe adding extra bacon cost more money. You don’t put enough! If you did I would not have to ask for it!" << std::endl;
}

void	Karen::_warning(void) const
{
    std::cout << "[WARNING]" << std::endl;
	std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming here for years and you just started working here last month." << std::endl;
}

void	Karen::_error(void) const
{
    std::cout << "[ERROR]" << std::endl;
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
}

//https://fr.wikibooks.org/wiki/Programmation_C-C%2B%2B/Pointeurs_et_r%C3%A9f%C3%A9rences_de_fonctions
void    Karen::complain(std::string level) const
{
    if (level != "INFO" && level != "DEBUG" && level != "WARNING" && level != "ERROR")
		return ;
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = 0;
    int index = -1;
    while (i < 4)
    {
        if (levels[i] == level)
            index = i;
        i++;
    }
    switch (index)
    {
        case -1:
            break ;
        case 0:
            _debug();
        case 1:
            _info();
        case 2:
            _warning();
        case 3:
            _error();
    }
}