#ifndef KAREN_HPP
#define KAREN_HPP

#include <iostream>
#include <string>

class Karen
{

/* Ceci est un pointeur sur fonction membre comme demande par le sujet */
typedef void (Karen::*f)(void)const;
public:
    Karen();
    ~Karen();

    void    complain(std::string level) const;

private:
    /* Ce sont bien des fonctions membres et pas des attributs */
    void _debug(void) const;
    void _info(void) const;
    void _warning(void) const;
    void _error(void) const;
};

//Le typedef est important pour eviter les erreurs
//https://isocpp.org/wiki/faq/pointers-to-members#:~:text=C%2B%2B%20introduces%20a%20new%20type,is%20undefined%20and%20probably%20disastrous.

//voir le typedef 

#endif