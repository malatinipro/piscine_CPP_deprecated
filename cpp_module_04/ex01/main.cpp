#include "animalClass.hpp"
#include "catClass.hpp"
#include "dogClass.hpp"

int main(void)
{
  {
    std::cout << "-------------------" << std::endl;
    std::cout << "---- MAIN TEST ----" << std::endl;
    std::cout << "---- Dog ----" << std::endl;
    const Animal* j = new Dog();
    std::cout << "---- Cat ----" << std::endl;
    const Animal* i = new Cat();

    std::cout << "---- Deleting ----" << std::endl;
    std::cout << "- delete dog -" << std::endl;
    delete j;
    std::cout << "- delete cat -" << std::endl;
    delete i;
    std::cout << "-------------------" << std::endl;
  }
  {
      std::cout << "------------- EXTRAS ------------" << std::endl;
      std::cout << "----- ARRAY TEST -----" << std::endl;
      //On  a déclaré
      Animal *array[4];
  		int	i = 0;
  		while (i < 4)
  		{
  			if (i < 2)
  			{
          std::cout << "--- dogs ---" << std::endl;
  				array[i] = new Dog();
  				array[i]->makeSound();
  			}
  			else
  			{
          std::cout << "--- cats ---" << std::endl;
  				array[i] = new Cat();
  				array[i]->makeSound();
  			}
  			i++;
  		}
  		i = 0;
      std::cout << "------ FREE ALL ------" << std::endl;
  		while (i < 4)
  		{
        std::cout << "--- deleting ---" << std::endl;
  			delete array[i];
  			i++;
  		}
      std::cout << std::endl;
      std::cout << "--- DEEP COPY ---" << std::endl;
      {
        std::cout << "--- cat ---" << std::endl;
        std::cout << "--- real ---" << std::endl;
        //Calling copy constructor should not leak with copies
        Cat cat_src;
        std::cout << "--- copy ---" << std::endl;
        Cat cat_copy(cat_src);
        std::cout << "-----------" << std::endl;
      }
      std::cout << std::endl;
      {
        //Calling copy constructor should not leak with copies
        std::cout << "--- dog ---" << std::endl;
        std::cout << "--- real ---" << std::endl;
        Dog dog_src;
        std::cout << "--- copy ---" << std::endl;
        Dog dog_copy(dog_src);
        std::cout << "-----------" << std::endl;
      }
  }
}
