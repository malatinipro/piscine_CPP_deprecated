#include "Fixed.hpp"

Fixed::Fixed(void): _fix_point(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &src)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = src;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	std::cout << "Assignation operator called" << std::endl;
	this->_fix_point = rhs.getRawBits();
	return (*this);
}

int Fixed::getRawBits(void) const {
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fix_point);
}

void Fixed::setRawBits(int const raw) {
	std::cout << "setRawBits member function called" << std::endl;
	this->_fix_point = raw;
}

/* Constructeur qui prend un int en parametre et le convertie a sa valeur fixe */
Fixed::Fixed(const int i)
{
    std::cout << "Int constructor called" << std::endl;
    //On bitshift du nombre de fract_bits pour convertir a la valeur fixe
    //decaler de 8 bits revient a faire * 256
    this->_fix_point = i << this->_fract_bits;
    //std::cout << this->_fix_point << std::endl;
}

/* Constructeur qui prend un float en parametre et le convertie a sa valeur fixe */
Fixed::Fixed(const float f)
{
    std::cout << "Float constructor called" << std::endl;
    // 1 << _fract_bits = 256
    //on arroundie le produit de notre float * 256
    //Round retourne une valeur entiere la plus proche du parametre)
    //roundf est une fonction dediee pour arrondir un float
    //On ajoute 8 zeros a notre float (donc vers la gauche pour ajouter)
    //On arrondie le tout
    this->_fix_point = roundf(f * (1 << _fract_bits));
    //std::cout << this->_fix_point << std::endl;
}

int Fixed::toInt(void) const
{
    return (this->_fix_point >> this->_fract_bits);
}

/* retourne la representation du point fixe sous format float */
float Fixed::toFloat(void) const
{
    return (roundf((this->_fix_point)) / (1 << this->_fract_bits));
}

//On retourne un ofstream pour pouvoir chainer les redirections de flux
//Ne pas confondre ostream et ofstream
std::ostream & operator<<(std::ostream & COUT, Fixed const & rhs)
{
    //L'output montre en exemple du sujet montre qu'on veut le "format" float
	COUT << rhs.toFloat();
	return (COUT);
}