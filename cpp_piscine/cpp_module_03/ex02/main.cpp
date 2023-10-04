#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main(void)
{
    /*
    std::cout << "----------- clap trap ----------" << std::endl;
    std::cout << "----------- CONSTRUCTION ----------" << std::endl;
    ClapTrap buddie("Buddie");
    ClapTrap no_name;

    no_name.setter_name("No name");

    ClapTrap buddie2;
    buddie2 = buddie;
    std::cout << "------------ GAME ----------" << std::endl;
    std::cout << "----------- attack ----------" << std::endl;
    buddie.attack("un chat");
    buddie2.attack("un chien");
    no_name.attack("un lapin");
    std::cout << "----------- take damage ----------" << std::endl;
    buddie.takeDamage(20);
    buddie2.takeDamage(0);
    no_name.takeDamage(5);
    std::cout << "----------- be repaired ----------" << std::endl;
     buddie.beRepaired(20);
    buddie2.beRepaired(0);
    no_name.beRepaired(5);
    //td::cout << "buddie2 is called " << buddie.getter_name() << std::endl;
    //ligne pour tester l enfant ScavTrap
    std::cout << std::endl;
    std::cout << "----------- scav trap ----------" << std::endl;
    std::cout << "----------- CONSTRUCTION ----------" << std::endl;
    ScavTrap scav;
    ScavTrap lola("Lola");
    ScavTrap lolo("Lolo");
    scav.setter_name("Lili");
    //scav = lolo;
    std::cout << "----------- take damage ----------" << std::endl;
    lolo.takeDamage(20);
    scav.takeDamage(13);
    lola.takeDamage(5);
    std::cout << "----------- be repaired ----------" << std::endl;
    lolo.beRepaired(12);
    scav.beRepaired(3);
    lola.beRepaired(10);
    std::cout << "----------- guard gate ----------" << std::endl;
    lolo.guardGuate();
    scav.guardGuate();
    lola.guardGuate();
    std::cout << "----------- DESTRUCTION ----------" << std::endl;
    */
    ClapTrap c("Clap");
    std::cout << "----------- frag trap ----------" << std::endl;
    std::cout << "----------- CONSTRUCTION ----------" << std::endl;
    FragTrap frag;
    std::cout << "-----------" << std::endl;
    FragTrap lola("Lola");
    std::cout << "-----------" << std::endl;
    FragTrap lolo("Lolo");
    std::cout << "----------- copie ----------" << std::endl;
    FragTrap copy = lolo;
    std::cout << "----------- setter ----------" << std::endl;
    frag.setter_name("Lili");
    //scav = lolo;
    std::cout << "----------- attack ----------" << std::endl;
    lolo.attack("un chat");
    frag.attack("un chien");
    lola.attack("un lapin");
    std::cout << "------ comparaison ------" << std::endl;
    c.attack("un chat");
    std::cout << "----------- take damage ----------" << std::endl;
    lolo.takeDamage(20);
    frag.takeDamage(13);
    lola.takeDamage(5);
    std::cout << "----------- be repaired ----------" << std::endl;
    lolo.beRepaired(12);
    frag.beRepaired(3);
    lola.beRepaired(10);
    std::cout << "----------- have fives ----------" << std::endl;
    lolo.highFivesGuys();
    frag.highFivesGuys();
    lola.highFivesGuys();
    std::cout << "----------- DESTRUCTION ----------" << std::endl;
    return (0);
    
}