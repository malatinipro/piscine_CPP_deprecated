#include "catClass.hpp"
#include "dogClass.hpp"
#include "brainClass.hpp"


int main(void)
{
  {
    std::cout << "---- SUBJECT MAIN ----" << std::endl;
    //const Animal* meta = new Animal();
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
    std::cout << "--------------------" << std::endl;
    //meta->makeSound();
    //delete meta;
    delete j;
    delete i;
    std::cout << "--------------------" << std::endl;
  }
  std::cout << "- ADDITIONNAL TESTS -" << std::endl;
  std::cout << "--------------------" << std::endl;
  {
    std::cout << "--- ANIMAL TESTS ---" << std::endl;
  }
  {
    std::cout << "--- CAT TESTS ---" << std::endl;
    std::cout << "--------------------" << std::endl;
    const Animal *cat = new Cat();
    std::cout << "--------------------" << std::endl;
    std::cout << cat->getType() << " " << std::endl;
    std::cout << "--------------------" << std::endl;
    cat->makeSound();
    std::cout << "--------------------" << std::endl;
    delete cat;
    std::cout << "--------------------" << std::endl;
  }
  {
    std::cout << "--- DOG TESTS ---" << std::endl;
    std::cout << "--------------------" << std::endl;
    const Animal *dog = new Dog();
    std::cout << "--------------------" << std::endl;
    dog->makeSound();
    std::cout << "--------------------" << std::endl;
    delete dog;
    std::cout << "--------------------" << std::endl;
  }
  return (0);
}
