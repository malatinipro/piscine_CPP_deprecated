/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:41:10 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 14:42:26 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "animalClass.hpp"
#include "catClass.hpp"
#include "dogClass.hpp"
#include "wrongAnimalClass.hpp"
#include "wrongCatClass.hpp"
#include "wrongDogClass.hpp"

int main(void)
{
  const Animal* meta = new Animal();
  const Animal* j = new Dog();
  const Animal* i = new Cat();
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  i->makeSound();
  j->makeSound();
  meta->makeSound();
  delete meta;
  delete j;
  delete i;
  std::cout << std::endl;
  std::cout << std::endl;
  {
    const Animal *animal = new Animal();
    std::cout << animal->getType() << " " << std::endl;
    animal->makeSound();
    delete animal;
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
  std::cout << std::endl;
  std::cout << std::endl;
  {
    const WrongAnimal *animal = new WrongAnimal();
    std::cout << animal->getType() << " " << std::endl;
    animal->makeSound();
    delete animal;
  }
  {
    const WrongAnimal *cat = new WrongCat();
    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound();
    delete cat;
  }
  {
    const WrongAnimal *dog = new WrongDog();
    std::cout << dog->getType() << " " << std::endl;
    dog->makeSound();
    delete dog;
  }
  return (0);
}
