/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dogClass.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:49:12 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 18:55:13 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include "animalClass.hpp"
# include "brainClass.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(Dog const & src );
		virtual ~Dog();

		Dog		&operator=(Dog const & rhs);
		void	makeSound(void) const;

	private:
		 Brain *_brain;
};
