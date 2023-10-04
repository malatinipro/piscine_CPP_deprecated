/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:57:08 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 12:57:25 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Zombie.hpp"

int main(void)
{
	randomChump("Zombie stack allocated");
	Zombie	*heap_z = newZombie("Zombie heap allocated");
	if (!heap_z)
    {
        std::cout << "Error during memory allocation using new." << std::endl;
        return (1);
    }
	heap_z->announce();
	delete heap_z;
	return (0);
}
