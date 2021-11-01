#include "./Zombie.hpp"

/* Creates a Zombie and makes it announce itself as requested */
void    randomChump(std::string name)
{
    Zombie chump(name);
    chump.announce();
    /* Destroy ici et pas a la fin du programme */
}