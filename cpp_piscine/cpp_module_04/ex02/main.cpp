/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:54:23 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 18:57:04 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "catClass.hpp"
#include "dogClass.hpp"
#include "brainClass.hpp"

int main(void)
{
  {
    const Animal  *j = new Dog();
    const Animal  *i = new Cat();

    std::cout << j->getType() << " " << std::endl;
    std::cout << i->getType() << " " << std::endl;

    i->makeSound();
    j->makeSound();

    delete j;
    delete i;
  }
  {
    const Animal *cat = new Cat();
    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound();
    delete cat;
  }
  {
    const Animal *dog = new Dog();
    dog->makeSound();
    delete dog;
  }
  return (0);
}
