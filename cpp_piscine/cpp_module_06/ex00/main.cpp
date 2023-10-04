#include <string>
#include <iostream>
#include <cmath>

#define ERROR 1

bool  check_type(std::string const &str);
bool  convert_to_types(std::string const &str);

int main(int argc, char **argv)
{
  std::string arg;

  if (argc != 2)
  {
    std::cerr << "Error: wrong numbers of arguments" << std::endl;
    return (ERROR);
  }
  arg = argv[1];
  if (arg.empty())
  {
    std::cerr << "Error: the string arg is empty." << std::endl;
    return (ERROR);
  }
  convert_to_types(arg);
  return (0);
}
