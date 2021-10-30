#include <string>
#include <iostream>
#include <climits>
#include <cmath>
#include <iomanip>
#include <cerrno>
#include <string>

bool	is_char(std::string const & str);
bool	is_int(std::string const & str);
bool	is_float(std::string const & str);
bool	is_double(std::string const & str);

void display_char(std::string const &str)
{
  char c = str[0];
  std::cout << "char: " << c << std::endl;
	std::cout << "int: " << static_cast<int>(c) << std::endl;
	std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;//<< ".0f"
	std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl; //".0"
}

bool display_int(std::string const &str)
{
  //std::cout << "int display function called" << std::endl;
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
		std::cout << "char: not ascii" << std::endl;
  else if (!isprint(static_cast<char>(i)))
  	std::cout << "char: not printable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(i) << std::endl;
	std::cout << "int: " << i << std::endl;
	std::cout << "float: " << std::setprecision(6) << static_cast<float>(i) << std::endl;
	std::cout << "double: " << std::setprecision(6) << static_cast<double>(i) << std::endl;
	return (true);
}

bool	display_float(std::string const & str)
{
  const std::string s1 = "nanf";
  const std::string s2 = "+inff";
  const std::string s3 = "-inff";

  //std::cout << "float display function called" << std::endl;
  if (str == s1 || str == s2 || str == s3)
  {
    std::cout << "char: not ascii" << std::endl;
    std::cout << "int: out of range" << std::endl;
    std::cout << "float: " << std::setprecision(6) << str << std::endl;
    std::cout << "double: " << std::setprecision(6) << str.substr(0, str.length() - 1) << std::endl;
    return (true);
  }
  //Attention checker
	double	d = strtod(str.data(), NULL);
	float	f;
	(void)d;
	if (errno == ERANGE)
	{
		std::cerr << "Error: invalid value" << std::endl;
		return (false);
	}
  //conversion en float
	f = atof(str.data());
	if (static_cast<int>(f) > CHAR_MAX || static_cast<int>(f) < CHAR_MIN)
		std::cout << "char: not ascii" << std::endl;
  else if (!isprint(static_cast<char>(f)))
    std::cout << "char: not printable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(f) << std::endl;
	if (static_cast<long>(f) > INT_MAX || static_cast<long>(f) < INT_MIN)
		std::cout << "int: out of range" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(f) << std::endl;
  //Check de la precision
  if (fmod(f, 1))
  {
  	std::cout << "float: " << f << "f" << std::endl;
  	std::cout << "double: " << static_cast<double>(f) << std::endl;
  }
  else
  {
  	std::cout << "float: " << f << ".0f" << std::endl;
  	std::cout << "double: " << static_cast<double>(f) << ".0" << std::endl;
  }
	return (true);
}

bool	display_double(std::string const & str)
{
  const std::string s1 = "nan";
  const std::string s2 = "+inf";
  const std::string s3 = "-inf";

  //std::cout << "double display function called" << std::endl;
  if (str == s1 || str == s2 || str == s2)
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
		std::cout << "char: not ascii" << std::endl;
  else if (!isprint(static_cast<char>(d)))
    std::cout << "char: not printable" << std::endl;
	else
		std::cout << "char: " << static_cast<char>(d) << std::endl;
	if (static_cast<long>(d) > INT_MAX || static_cast<long>(d) < INT_MIN)
		std::cout << "int: out of range" << std::endl;
	else
		std::cout << "int: " << static_cast<int>(d) << std::endl;
  if (fmod(d, 1))
  {
  	std::cout << "float: " << d << "f" << std::endl;
  	std::cout << "double: " << static_cast<double>(d) << std::endl;
  }
  else
  {
  	std::cout << "float: " << d << ".0f" << std::endl;
  	std::cout << "double: " << static_cast<double>(d) << ".0" << std::endl;
  }
	return (true);
}

bool  convert_to_types(std::string const &str)
{
  if (is_char(str))
  {
    display_char(str);
    return (true);
  }
  else if (is_int(str))
  {
    display_int(str);
    return (true);
  }
  else if (is_float(str))
  {
    display_float(str);
    return (true);
  }
  else if (is_double(str))
  {
    display_double(str);
    return (true);
  }
  else
  {
    std::cout << "Error. Bad argument" << std::endl;
  }
  return (false);
}
