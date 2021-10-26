#include "animalClass.hpp"
#include "catClass.hpp"
#include "dogClass.hpp"
#include "wrongAnimalClass.hpp"
#include "wrongCatClass.hpp"
#include "wrongDogClass.hpp"

int main(void)
{
  //Main du sujet
  std::cout << "---- SUBJECT MAIN ----" << std::endl;
  const Animal* meta = new Animal();
  std::cout << "--------------------" << std::endl;
  const Animal* j = new Dog();
  std::cout << "--------------------" << std::endl;
  const Animal* i = new Cat();
  std::cout << "--------------------" << std::endl;
  std::cout << j->getType() << " " << std::endl;
  std::cout << i->getType() << " " << std::endl;
  std::cout << "--------------------" << std::endl;
  i->makeSound(); //will output the cat sound!
  j->makeSound();
  meta->makeSound();
  std::cout << "--------------------" << std::endl;
  delete meta;
  delete j;
  delete i;
  std::cout << "--------------------" << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "- ADDITIONNAL TESTS -" << std::endl;
  std::cout << "--------------------" << std::endl;
  {
    std::cout << "--- ANIMAL TESTS ---" << std::endl;
    std::cout << "--------------------" << std::endl;
    const Animal *animal = new Animal();
    std::cout << animal->getType() << " " << std::endl;
    animal->makeSound();
    delete animal;
    std::cout << "--------------------" << std::endl;
  }
  {
    std::cout << "--- CAT TESTS ---" << std::endl;
    std::cout << "--------------------" << std::endl;
    const Animal *cat = new Cat();
    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound();
    delete cat;
    std::cout << "--------------------" << std::endl;
  }
  {
    std::cout << "--- DOG TESTS ---" << std::endl;
    std::cout << "--------------------" << std::endl;
    const Animal *dog = new Dog();
    dog->makeSound();
    delete dog;
    std::cout << "--------------------" << std::endl;
  }
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << "- WRONG TESTING- " << std::endl;
  {
    std::cout << "--- wrong animal ---" << std::endl;
    std::cout << "--------------------" << std::endl;
    const WrongAnimal *animal = new WrongAnimal();
    std::cout << animal->getType() << " " << std::endl;
    animal->makeSound();
    delete animal;
    std::cout << "--------------------" << std::endl;
  }
  {
    std::cout << "--- wrong cat ---" << std::endl;
    std::cout << "--------------------" << std::endl;
    const WrongAnimal *cat = new WrongCat();
    std::cout << cat->getType() << " " << std::endl;
    cat->makeSound();
    delete cat;
    std::cout << "--------------------" << std::endl;
  }
  {
    std::cout << "--- wrong dog ---" << std::endl;
    std::cout << "--------------------" << std::endl;
    const WrongAnimal *dog = new WrongDog();
    std::cout << dog->getType() << " " << std::endl;
    dog->makeSound();
    delete dog;
    std::cout << "--------------------" << std::endl;
  }
  return (0);
}
