#include <string>
#include <iostream>
#include <cmath>

//checker sur Linux
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
  //checker qu'il n'y a pas de pb sur Linux
  arg = argv[1];
  if (arg.empty())
  {
    std::cerr << "Error: the string arg is empty." << std::endl;
    return (ERROR);
  }
  convert_to_types(arg);
  //1. Verifier que la valeur appartient a un type scalaire
    // = détecter le type du littéral
    //puis acquérir ce littéral dans le bon type
    //types scalaires suivants : char, int, float ou double.
  //2. Vérifier les valeurs pour chaque type, renvoyer des erreurs
    //pour les floats et les doubles il faut accepter les "pseudos littéraux"
  //3. Faire la conversion explicitement dans les trois types
  // ET afficher avec le formattagea
  return (0);
}
