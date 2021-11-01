#include "./Zombie.hpp"

int main(void)
{
	std::cout << "randomChump() allocates a zombie on the stack and announce itself." << std::endl;
	randomChump("Zombie stack allocated");
	std::cout << "newZombie() allocates a zombie on the heap and returns the resulting pointer." << std::endl;
    /* Recuperation du pointeur */
	Zombie	*heap_z = newZombie("Zombie heap allocated");
	if (!heap_z)
    {
        std::cout << "Error during memory allocation using new." << std::endl;
        return (1);
    }
    std::cout << "For testing purposes let's show that the announce function works fine on the heap allocated zombie" << std::endl;
	heap_z->announce();
    /* Freeing the heap allocated zombie */
	delete heap_z;
	return (0);
}