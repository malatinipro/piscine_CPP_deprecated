#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <iostream>
#include <sstream>
#include <iomanip>
#include <string>

class Zombie 
{
/* Rappel: constructeur et destructeur toujours dans la partie public */
public:
    Zombie(void);
    /* Constructor overloading: differences dans les parametres*/
    Zombie (std::string name);
    ~Zombie(void);

    /* Setter pour le name */
    void        setter_name(std::string);
    std::string getter_name(void) const;
    //Va permettre au zombie de s'annoncer
    //Constante car on ne va pas modifier "this" (= pointeur sur instance)
    //Annonce est mentionne comme une fonction membre alors que les autres fonctions ne le sont pas
    void       announce(void) const;

private:
    std::string _name;
};
/* Bien penser a ne pas oublier le ; ici*/


void    randomChump(std::string name);
Zombie  *newZombie(std::string name);

#endif