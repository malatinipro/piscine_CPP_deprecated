#include "./Zombie.hpp"

/* String stream est une classe qui permet d'operer sur des strings */

Zombie* zombieHorde(int N, std::string name)
{
    /* On a qu un seul nom en parametre donc on va les differentier en "concatenant" avec leur numero*/
    Zombie *horde;
    
    //Lorsqu'on fait un new on appelle le constucteur  - celui sans parametre
    horde = new Zombie[N];
    //Obligé d utiliser std::stringstream car les fonctions to_string ne marchent pas sur la vm
    std::stringstream   ss;
    int                 i;

    i = 0;
    while (i < N)
    {
        //str get et set content
        ss.str(std::string());//on remplit avec une ligne vide
        ss << i;//On fait l equivalent d'un itoa
        horde[i].setter_name(name + "_" + ss.str());
        horde[i].announce();
        i++;
    }
    return (horde);
}