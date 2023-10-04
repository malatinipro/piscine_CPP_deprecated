#include "Fixed.hpp"

const int	Fixed::_fract_bits = 8;

/* Constructeur par defaut qui initialise le point fixe a 0 */
Fixed::Fixed(void): _fix_point(0)
{
	std::cout << "Default constructor called" << std::endl;
}

/* Constructeur par copie - raisons d'optimisation */
/* La forme habituelle de ce type de constructeur
est d'avoir en paramètre une référence const.
A utiliser en cas de mémoire dynamique ou de ressources systemes (fichiers, sockets...).
Le fait d'avoir une référence permet d'éviter les boucles infinies de construction.
#https://cpp.developpez.com/cours/cppavance/#LI-B
*/
Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

//Attente de la forme canonique
//Le fait de retourner un Fixed & va nous permettre de chainer l assignation
//https://docs.microsoft.com/fr-fr/cpp/cpp/assignment-operators?view=msvc-160
//https://www.it-swarm-fr.com/fr/c%2B%2B/quelle-est-la-difference-entre-loperateur-daffectation-et-le-constructeur-de-copie/1067928500/
//Cet opérateur sert après une initialisation
Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fix_point = rhs.getRawBits();
	return (*this);
}

/*getter*/
int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fix_point);
}

/* setters */
void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fix_point = raw;
}
