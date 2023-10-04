#include "./Fixed.hpp"

/* Main du sujet */
int main(void) {
	//Instanciation via constructeur par defaut
	Fixed a;
	//Instanciation via constructeur par copie
	Fixed b(a);
	Fixed c;
	//Utilisation de l'operateur d'assignation
	c = b;
	//Affichage des valeurs
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}
