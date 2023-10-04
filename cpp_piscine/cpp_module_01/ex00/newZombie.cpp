#include "./Zombie.hpp"

/* Fonction demandee dans le sujet, "methode de classe" qui "remplace" un constructeur
mais le prototype demande ne demande pas de mettre de static donc il est recommande de proceder comme suit */
Zombie  *newZombie(std::string name)
{
    /* Allocation dynamique avec le deuxieme constructeur, toujours penser au pointeur */
    Zombie *zomb = new Zombie(name);
    /* En l'occurence one est oblige d'utiliser new puisqu on nous demande de retourner un pointeur */
    return (zomb);
}