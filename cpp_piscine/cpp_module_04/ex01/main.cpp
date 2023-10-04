/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:49:26 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 14:50:28 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animalClass.hpp"
#include "catClass.hpp"
#include "dogClass.hpp"

int main(void)
{
  {
    const Animal* j = new Dog();
    const Animal* i = new Cat();

    delete j;
    delete i;
  }
  {
      Animal *array[4];
  		int	i = 0;
  		while (i < 4)
  		{
  			if (i < 2)
  			{
  				array[i] = new Dog();
  				array[i]->makeSound();
  			}
  			else
  			{
  				array[i] = new Cat();
  				array[i]->makeSound();
  			}
  			i++;
  		}
  		i = 0;
  		while (i < 4)
  		{
  			delete array[i];
  			i++;
  		}
      std::cout << std::endl;
      {
        Cat cat_src;
        Cat cat_copy(cat_src);
      }
      std::cout << std::endl;
      {
        Dog dog_src;
        Dog dog_copy(dog_src);
      }
  }
}
