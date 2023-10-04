#ifndef FIXED_HPP
# define FIXED_HPP

# include <iostream>

class Fixed {
public:
	Fixed(void);
	//intialisera a zero comme demande dans le sujet
	Fixed(Fixed const & src);
	//constructeur par copie
	~Fixed(void);
	Fixed & operator=(Fixed const &f);

	int		getRawBits(void) const;//getter
	void	setRawBits(int const raw);//setter

private:
	int 				_fix_point;
	static const int	_fract_bits;
};

std::ostream & operator<<(std::ostream & o, Fixed const & i);

#endif
