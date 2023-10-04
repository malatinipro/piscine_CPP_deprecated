#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
//Ici on voit bien qu on herite publiquement de ClapTrap
class ScavTrap: public ClapTrap
{
    public:
        ScavTrap();
		ScavTrap( ScavTrap const & src );
		ScavTrap( std::string name );
		~ScavTrap();

        ScavTrap &		operator=( ScavTrap const & rhs );
        //overload de attack
		void	        attack(std::string const & target);
        //be repaired is inherited
        //take damaged is inherited
		void	        guardGuate(void);

    protected:
        bool _gate_keeper_mode;
};
#endif