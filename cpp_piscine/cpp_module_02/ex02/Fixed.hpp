#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>
#include <cmath>

class Fixed {
public:
	Fixed(void);
    Fixed(const int int_to_convert);
    Fixed(const float float_to_convert);
	Fixed(Fixed const & src);
	~Fixed(void);
    //L'operateur d'assignation est binaire
    //rhs = right hand side = ce que je souhaite assigner
	Fixed & operator=(Fixed const &rhs);

	int		getRawBits(void) const;
	void	setRawBits(int const raw);
    float   toFloat(void) const;
    int     toInt(void) const;

    /* Overloads supplementaires - ex02 */
    /* comparaison */
    bool        operator>(Fixed const &rhs) const;
    bool	    operator<(Fixed const & rhs) const;
	bool	    operator>=(Fixed const & rhs) const;
	bool	    operator<=(Fixed const & rhs) const;
	bool	    operator==(Fixed const & rhs) const;
	bool	    operator!=(Fixed const & rhs) const;
    /* arithmetiques */
    Fixed	    operator+(Fixed const & rhs) const;
	Fixed	    operator-(Fixed const & rhs) const;
	Fixed	    operator*(Fixed const & rhs) const;
	Fixed	    operator/(Fixed const & rhs) const;
    /* incrementation */
    //https://docs.microsoft.com/fr-fr/cpp/cpp/increment-and-decrement-operator-overloading-cpp?view=msvc-160
    //& pre increment 
    //sans & post increment
	Fixed	    operator++(int);
    Fixed&	    operator++(void);
	Fixed	    operator--(int);
    Fixed&	    operator--(void);

    //fonctions de classe (statique)
    static Fixed const &	min(Fixed const & f1, Fixed const & f2);
    static Fixed const &	max(Fixed const & f1, Fixed const & f2);
    static Fixed &	min(Fixed & f1, Fixed & f2);
    static Fixed &	max(Fixed & f1, Fixed & f2);

private:
	int 				_fix_point;
	static const int	_fract_bits = 8;
};

std::ostream & operator<<(std::ostream &COUT, Fixed const & rhs);

#endif