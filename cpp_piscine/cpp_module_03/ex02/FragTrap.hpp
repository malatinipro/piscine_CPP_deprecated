#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:

		FragTrap();
		FragTrap( FragTrap const & src );
		FragTrap( std::string name );
		~FragTrap();

		FragTrap &		operator=( FragTrap const & rhs );
		void	highFivesGuys(void);
		void	attack(std::string const & target);
};

#endif 