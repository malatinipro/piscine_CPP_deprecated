#ifndef DOGCLASS_HPP
#define DOGCLASS_HPP

#include "animalClass.hpp"

class Dog: public Animal
{
	public:
		Dog();
		Dog(Dog const & src );
		virtual ~Dog();

		Dog &	operator=(Dog const & rhs);
		void	makeSound(void) const;
};

#endif
