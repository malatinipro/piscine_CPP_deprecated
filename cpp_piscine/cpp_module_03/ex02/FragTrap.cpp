/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:14:55 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 18:38:06 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(): ClapTrap()
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
}

FragTrap::FragTrap( const FragTrap & src ): ClapTrap(src)
{
	std::cout << "A new frag trap is born." << std::endl;
	return ;

}

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	this->_hit_points = 100;
	this->_energy_points = 100;
	this->_attack_damage = 30;
	std::cout << "Frag Trap " << this->_name
		<< " is born." << std::endl;
}


FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << this->_name
		<< " is being destructed." << std::endl;
	return ;
}

FragTrap &  FragTrap::operator=( FragTrap const & rhs )
{
	ClapTrap::operator=(rhs);
	return *this;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << this->_name
		<< " is requesting a positive high fives !" << std::endl;
}

void	FragTrap::attack(std::string const & target)
{
	std::cout << "FragTrap " << this->_name << " attack "
		<< target << " causing " << this->_attack_damage
		<< " points of damage!" << std::endl;
}
