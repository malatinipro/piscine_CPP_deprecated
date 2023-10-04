/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:14:04 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 18:36:50 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void): ClapTrap()
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	this->_gate_keeper_mode = false;
	return ;
}

ScavTrap::ScavTrap( const ScavTrap & src ): ClapTrap(src)
{
	return ;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 50;
	this->_attack_damage = 20;
	this->_gate_keeper_mode = false;
	std::cout << "ScavTrap " << this->_name << " is born." << std::endl;
	return ;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap " << this->_name
		<< " is being destructed." << std::endl;
}

ScavTrap &  ScavTrap::operator=( ScavTrap const & rhs )
{
	ClapTrap::operator=(rhs);
	this->_gate_keeper_mode = rhs._gate_keeper_mode;
	return *this;
}

void	ScavTrap::attack(std::string const & target)
{
	std::cout << "ScavTrap " << this->_name << " attack "
		<< target << " causing " << this->_attack_damage
		<< " points of damage!" << std::endl;
}

void	ScavTrap::guardGuate(void)
{
	if (this->_energy_points)
	{
		std::cout << "ScavTrap " << this->_name
			<< " guarde keeper mode is now activated" << std::endl;
		this->_gate_keeper_mode = true;
	}
}
