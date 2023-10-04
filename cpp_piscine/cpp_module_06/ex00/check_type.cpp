#include <string>
#include <iostream>

bool  is_char(std::string const &str)
{
  int len = str.length();
  if (len == 1 && isprint(str[0]) && !isdigit(str[0]))
    return (true);
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
  return (true);
}

bool is_float(std::string const &str)
{
  size_t i = 0;
  size_t len = str.length() - 1;
  (void)i;
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
  size_t f_position = str.find('f');
  size_t f_position_check = str.rfind('f');
  if (f_position != f_position_check)
    return (false);
  if (f_position != len)
    return (false);

  //check le tiret
  size_t dash_position = str.find("-");
  if (dash_position != 0 && str[0] == '-')
    return (false);

  //check le tout
  while (i < len)
  {
    if (!isprint(str[i]))
      return (false);
    if (!isdigit(str[i]) && !(str[i] == '-') && !(str[i] == '.'))
      return (false);
    i++;
  }
  if (str[i] && !(isdigit(str[i])) && !(str[i] == 'f'))
      return (false);
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
      return (false);

  //check le tiret
  size_t dash_position = str.find("-");
  if (dash_position != 0 && str[0] == '-')
      return (false);
  while (i < len)
  {
    if (!isprint(str[i]))
      return (false);
    if (!isdigit(str[i]) && !(str[i] == '-') && !(str[i] == '.'))
      return (false);
    i++;
  }
  if (str[i] && !(isdigit(str[i])) && !(str[i] == 'f'))
      return (false);
  return (true);
}

int  check_type(std::string const &str)
{
  if (is_char(str) == true)
  {
    //std::cout << "Is char returned true" << std::endl;
    return (1);
  }

  else if (is_int(str) == true)
  {
    //std::cout << "Is int returned true" << std::endl;
    return (2);
  }
  else if (is_float(str) == true)
  {
    //std::cout << "Is float returned true" << std::endl;
    return (3);
  }
  else if (is_double(str) == true)
  {
    //std::cout << "Is double returned true" << std::endl;
    return (4);
  }
  //std::cout << "Error: incorrect type argument" << std::endl;
  return (0);
}
