/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:15:04 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 15:23:02 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public:

		FragTrap();
		FragTrap( FragTrap const & src );
		FragTrap( std::string name );
		~FragTrap();

		FragTrap	&operator=( FragTrap const & rhs );
		void		highFivesGuys(void);
		void		attack(std::string const & target);
};
