#include <string>
#include <iostream>

/*
** Il faut checker les char non affichables pour chaque type.
*/
bool  is_char(std::string const &str)
{
  int len = str.length();
  //std::cout << "len is " << len << std::endl;
  if (len == 1 && isprint(str[0]) && !isdigit(str[0]))
  {
    //std::cout << "it is true" << len << std::endl;
    return (true);
  }
  //std::cout << "It is false" << std::endl;
  return (false);
}

bool  is_int(std::string const &str)
{
  int i;
  int len;

  i = 0;
  len = str.length();
  while (i < len)
  {
    if (str[i] == '-' && i != 0)
        return (false);
    if (!isprint(str[i]))
      return (false);
    if (!isdigit(str[i]) && i != 0)
      return (false);
    i++;
  }
  //std::cout << "The int is correct" << std::endl;
  return (true);
}

bool is_float(std::string const &str)
{
  size_t i = 0;
  size_t len = str.length() - 1;
  (void)i;
  //Comparaison pour les valeurs pseudos littérales
  //a checker sur linux
  if (!(str.compare("-inff")) || !(str.compare("+inff")) || !(str.compare("nanf")))
    return (true);

  //check le point
  size_t dot_position = str.find('.');
  size_t dot_position_check = str.rfind('.');
  if (dot_position != dot_position_check)
    return (false);
  if (dot_position == len)
    return (false);

  //check le f
  //std::cout << "dot position is " << dot_position << " while check is " << dot_position_check << std::endl;
  size_t f_position = str.find('f');
  size_t f_position_check = str.rfind('f');
  if (f_position != f_position_check)
    return (false);
  //std::cout << "f position is " << f_position << " while check is " << f_position_check << std::endl;
  if (f_position != len)
  {
    //std::cout << "f position is not at the right place" << std::endl;
      return (false);
  }
  //std::cout << "test" << std::endl;
  //check le tiret
  size_t dash_position = str.find("-");
  if (dash_position != 0 && str[0] == '-')
  {
      //std::cout << "The dash is not at the right place" <<std::endl;
      return (false);
  }
  //check le tout
  while (i < len)
  {
    //std::cout << str[i] << std::endl;
    if (!isprint(str[i]))
      return (false);
    if (!isdigit(str[i]) && !(str[i] == '-') && !(str[i] == '.'))
      return (false);
    i++;
  }
  if (str[i] && !(isdigit(str[i])) && !(str[i] == 'f'))
  {
      //std::cout << "This can't be a float" << std::endl;
      return (false);
  }
  //std::cout << "we were here" << std::endl;
  return (true);
}

bool is_double(std::string const &str)
{
  size_t i = 0;
  size_t len = str.length() - 1;
  (void)i;

  if (!(str.compare("-inf")) || !(str.compare("+inf")) || !(str.compare("nan")))
    return (true);

  //check le point
  size_t dot_position = str.find('.');
  size_t dot_position_check = str.rfind('.');
  if (dot_position != dot_position_check)
    return (false);
  if (dot_position == len)
    return (false);

  //check le f
  size_t f_position = str.find('f');
  size_t f_position_check = str.rfind('f');
  if (f_position != f_position_check)
    return (false);
  if (f_position != len)
  {
      return (false);
  }
  //check le tiret
  size_t dash_position = str.find("-");
  if (dash_position != 0 && str[0] == '-')
  {
      return (false);
  }
  while (i < len)
  {
    if (!isprint(str[i]))
      return (false);
    if (!isdigit(str[i]) && !(str[i] == '-') && !(str[i] == '.'))
      return (false);
    i++;
  }
  if (str[i] && !(isdigit(str[i])) && !(str[i] == 'f'))
  {
      return (false);
  }
  return (true);
}

int  check_type(std::string const &str)
{
  if (is_char(str) == true)
  {
    //std::cout << "is_char returned true" << std::endl;
    return (1);
  }
  if (is_int(str) == true)
    return (2);
  if (is_float(str) == true)
    return (3);
  if (is_double(str) == true)
    return (4);
  return (0);
}
