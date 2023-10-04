#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    public:
        ClapTrap(void);
        ClapTrap(ClapTrap const &src);
        ClapTrap(std::string name);
        ~ClapTrap(void);
        ClapTrap & operator=(ClapTrap const &rhs);

        void            attack(std::string const &target);
        void            takeDamage(unsigned int amount);
        void            beRepaired(unsigned int amount);

        void           setter_name(std::string name);
        std::string    getter_name(void);

    private:
        std::string         _name;
        unsigned int        _hit_points;
        unsigned int        _energy_points;
        unsigned int        _attack_damage;
};
#endif 