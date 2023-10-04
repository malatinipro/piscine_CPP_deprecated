/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:14:24 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 12:14:25 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"
class ScavTrap: public ClapTrap
{
    public:
        ScavTrap();
		ScavTrap( ScavTrap const & src );
		ScavTrap( std::string name );
		~ScavTrap();

        ScavTrap &		operator=( ScavTrap const & rhs );
		void	        attack(std::string const & target);
		void	        guardGuate(void);

    protected:
        bool _gate_keeper_mode;
};
#endif
