#include <string>
#include <iostream>
#include <climits>
//#include <math.h>
#include <iomanip>
#include <cerrno>

bool	is_char(std::string const & str);
bool	is_int(std::string const & str);
bool	is_float(std::string const & str);
bool	is_double(std::string const & str);

/*
** static cast d'un char vers autres types
*/
void display_char(std::string const &str)
{
  std::cout << "char display function called" << std::endl;
  char c = str[0];
  std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << std::setprecision(6) << static_cast<float>(c) << std::endl;//<< ".0f"
	std::cout << "double: " << std::setprecision(6) << static_cast<double>(c) << std::endl; //".0"
}

/*
** Static cast d'un int vers autres types
*/
bool display_int(std::string const &str)
{
  std::cout << "int display function called" << std::endl;
  //strtol converts string to long integer
  //data va permettre de convertir la string en char * (tableau)
	long int	l = strtol(str.data(), NULL, 10);
	int			i = 0;

	if (l > INT_MAX || l < INT_MIN)
	{
		std::cerr << "Error: invalid value" << std::endl;
		return (false);
	}
	i = atoi(str.data());
	if (i > CHAR_MAX || i < CHAR_MIN)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(i) << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::setprecision(6) << static_cast<float>(i) << std::endl;
	std::cout << "double: " << std::setprecision(6) << static_cast<double>(i) << std::endl;
	return (true);
}

/*
** Static cast d'un float vers autres types
*/
bool	display_float(std::string const & str)
{
  std::cout << "float display function called" << std::endl;
  if (str == "nanf" || str == "+inff" || str == "-inff")
  {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: " << std::setprecision(6) << str << std::endl;
    std::cout << "double: " << std::setprecision(6) << str.substr(0, str.length() - 1) << std::endl;
    return (true);
  }
  //permet de convertir en double cette fois
	double	d = strtod(str.data(), NULL);
	float	f;
  //Si strtod renvoie une erreur
	(void)d;
	if (errno == ERANGE)
	{
		std::cerr << "Error: invalid value" << std::endl;
		return (false);
	}
  //conversion en float
	f = atof(str.data());
	if (static_cast<int>(f) > CHAR_MAX || static_cast<int>(f) < CHAR_MIN)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(f) << std::endl;
	if (static_cast<long>(f) > INT_MAX || static_cast<long>(f) < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
	std::cout << "float: " << std::setprecision(6) << f << std::endl;
	std::cout << "double: " << std::setprecision(6) << static_cast<double>(f) << std::endl;
	return (true);
}

bool	display_double(std::string const & str)
{
  std::cout << "double display function called" << std::endl;
  if (str == "nan" || str == "+inf" || str == "-inf")
  {
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: " << str << "f" << std::endl;
    std::cout << "double: " << str << std::endl;
    return (true);
  }
  //converts a string to a double
	double	d = strtod(str.data(), NULL);
	if (errno == ERANGE)
	{
		std::cerr << "Error: invalid value" << std::endl;
		return (false);
	}
	if (static_cast<int>(d) > CHAR_MAX || static_cast<int>(d) < CHAR_MIN)
		std::cout << "char: impossible" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(d) << std::endl;
	if (static_cast<long>(d) > INT_MAX || static_cast<long>(d) < INT_MIN)
		std::cout << "int: impossible" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
		std::cout << "float: " << std::setprecision(6) << static_cast<float>(d) << std::endl;
		std::cout << "double: " << std::setprecision(6) << std::endl;
	return (true);
}

bool  convert_to_types(std::string const &str)
{
  if (is_char(str))
  {
    display_char(str);
    return (true);
  }
  if (is_int(str))
  {
    display_int(str);
    return (true);
  }
  if (is_float(str))
  {
    display_float(str);
    return (true);
  }
  if (is_double(str))
  {
    display_double(str);
    return (true);
  }
  return (false);
}
