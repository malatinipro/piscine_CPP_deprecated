#include "Fixed.hpp"

Fixed::Fixed(void): _fix_point(0)
{
	//std::cout << "Default constructor called" << std::endl;
    return ;
}

Fixed::Fixed(const Fixed &src)
{
	//return ;std::cout << "Copy constructor called" << std::endl;
	*this = src;
    return ;
}

Fixed::~Fixed()
{
	//std::cout << "Destructor called" << std::endl;
    return ;
}

//Convertie l'int en valeur fixe correspondante
Fixed::Fixed(const int i)
{
    //std::cout << "Int constructor called" << std::endl;
    this->_fix_point = i << this->_fract_bits;
    //std::cout << this->_fix_point << std::endl;
    return ;
}

//Convertie le float en valeur fixe correspondante
Fixed::Fixed(const float f)
{
    //std::cout << "Float constructor called" << std::endl;
    this->_fix_point = roundf(f * (1 << _fract_bits));
    //std::cout << this->_fix_point << std::endl;
    return ;
}

//Convertie la representation fixe en int
int Fixed::toInt(void) const
{
    //std::cout << "to int function called" << std::endl;
    int result = this->_fix_point >> this->_fract_bits;
    //std::cout << result << std::endl;
    //On redecale de 8 bits vers la droite pour revenir a l'int initial
    return (result);
}

//Convertie la representation fixe en float
float Fixed::toFloat(void) const
{
    //std::cout << "to float function called" << std::endl;
    float result = roundf((this->_fix_point)) / (1 << this->_fract_bits);
    //std::cout << result << std::endl;
    return (result);
}

int Fixed::getRawBits(void) const {
	//std::cout << "getRawBits member function called" << std::endl;
	return (this->_fix_point);
}

void Fixed::setRawBits(int const raw) {
	//std::cout << "setRawBits member function called" << std::endl;
	this->_fix_point = raw;
}

Fixed &Fixed::operator=(Fixed const &rhs)
{
	//std::cout << "Assignation operator called" << std::endl;
	this->_fix_point = rhs.getRawBits();
	return (*this);
}

std::ostream & operator<<(std::ostream & COUT, Fixed const & rhs)
{
	COUT << rhs.toFloat();
	return (COUT);
}

/* Operator overloads */
/* comparison - operateurs binaire, comparaison avec this */
/* On rappel que this est toujours le left handside */
bool    Fixed::operator>(Fixed const &rhs) const
{
    return (this->_fix_point > rhs._fix_point);
}

bool    Fixed::operator>=(Fixed const &rhs) const
{
    return (this->_fix_point >= rhs._fix_point);
}

bool    Fixed::operator<(Fixed const &rhs) const
{
    return (this->_fix_point < rhs._fix_point);
}

bool    Fixed::operator<=(Fixed const &rhs) const
{
    return (this->_fix_point <= rhs._fix_point);
}

bool    Fixed::operator==(Fixed const &rhs) const
{
    return (this->_fix_point == rhs._fix_point);
}

bool    Fixed::operator!=(Fixed const &rhs) const
{
    return (this->_fix_point != rhs._fix_point);
}

/* Operateurs arithmetiques - on retourne le type de notre classe */
Fixed   Fixed::operator+(Fixed const &rhs) const
{
    //On utilise toFloat et pas toInt vu l'output attendu
    Fixed result = (this->toFloat() + rhs.toFloat());
    return (result);
}

Fixed   Fixed::operator-(Fixed const &rhs) const
{
    Fixed result = (this->toFloat() - rhs.toFloat());
    return (result);
}

Fixed   Fixed::operator*(Fixed const &rhs) const
{
    Fixed result = (this->toFloat() * rhs.toFloat());
    return (result);
}

Fixed   Fixed::operator/(Fixed const &rhs) const
{
    Fixed result = (this->toFloat() / rhs.toFloat());
    return (result);
}

/* Iterators - Incrementation */
//https://www.geeksforgeeks.org/increment-and-decrement-operator-overloading-in-c/?ref=rp
//Pre increment
//Si on fait a = ++x, a aura la valeur de x incremente au prealable
Fixed   Fixed::operator++(int)
{
    Fixed temp = *this;
    //Ici on incremente le _fix_point
    //Le sujet indique qu'on modifie la valeur _fix_point sans avoir a reshifter les bits
    //On incremente de 1/256 eme
    (this->_fix_point)++;
    return (temp);
}

Fixed   Fixed::operator--(int)
{
    Fixed temp = *this;
    //Ici on incremente le _fix_point
    //Le sujet indique qu'on modifie la valeur _fix_point sans avoir a reshifter les bits
    //On incremente de 1/256 eme
    (this->_fix_point)--;
    return (temp);
}

//Post increment
//https://www.geeksforgeeks.org/pre-increment-and-post-increment-in-c/
//si on fait a = x++, a n aura pas la valeur de x
Fixed & Fixed::operator++(void)
{
    this->_fix_point++;
    //On doit dereferencer puis qu'on voit une reference
    return (*this);
}

Fixed & Fixed::operator--(void)
{
    this->_fix_point--;
    //On doit dereferencer puis qu'on voit une reference
    return (*this);
}

/* Fonctions de classes */
//Fixed::min()
Fixed const &			Fixed::min(Fixed const & f1, Fixed const & f2)
{
    if (f1 < f2)
        return (f1);
    else
        return (f2);
}

Fixed const &		    Fixed::max(Fixed const & f1, Fixed const & f2)
{
    if (f1 > f2)
        return (f1);
    else
        return (f2);
}

Fixed &			Fixed::min(Fixed & f1, Fixed & f2)
{
    if (f1 < f2)
        return (f1);
    else
        return (f2);
}

Fixed &		    Fixed::max(Fixed & f1, Fixed & f2)
{
    if (f1 > f2)
        return (f1);
    else
        return (f2);
}

/*Overloads des fonctions min et max*/
Fixed const &	min(Fixed const & f1, Fixed const & f2)
{
     if (f1 < f2)
        return (f1);
    else
        return (f2);
}

//min()
Fixed const &	max(Fixed const & f1, Fixed const & f2)
{
     if (f1 > f2)
        return (f1);
    else
        return (f2);
}

Fixed &	min(Fixed & f1, Fixed & f2)
{
     if (f1 < f2)
        return (f1);
    else
        return (f2);
}

//min()
Fixed &	max(Fixed & f1, Fixed & f2)
{
     if (f1 > f2)
        return (f1);
    else
        return (f2);
}
