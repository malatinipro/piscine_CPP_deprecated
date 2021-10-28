#include "DataClass.hpp"
#include <iostream>

class Data;

/*
** uintptr_t
** an unsigned integer type with the property that any
** valid pointer to void can be converted to this type,
** then converted back to pointer to void,
** and the result will compare equal to the original pointer
*/

/*
** On a besoin de faire un reinterpret_cast car
** c'est celui qui est le plus permissif
** et on veut pouvoir appliquer nos fonctions sur
** n'importe quel type
*/

/*
** En informatique, la sérialisation (de l'anglais américain serialization) est
** le codage d'une information sous la forme d'une suite d'informations
** plus petites (dites atomiques, voir l'étymologie de atome) pour,
** par exemple, sa sauvegarde (persistance)
** ou son transport sur le réseau (proxy, RPC…)
*/
uintptr_t	serialize(Data* ptr)
{
  //static cast n 'est pas autorise
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data*	deserialize(uintptr_t raw)
{
  //dynamic cast n'est pas possible non plus vu notre prototype
	return (reinterpret_cast<Data *>(raw));
}

int main(void)
{
  //On a créé une classe mais en réalité c'est juste pour tester
  Data      *data_ptr = new Data(10);
  std::cout << "-----------------------" << std::endl;
  std::cout << "-- Declared data ptr --" << std::endl;
  std::cout << "Adress: " << data_ptr << std::endl;
  std::cout << "Value: " << data_ptr->getValue()  << std::endl;;
  std::cout << "-----------------------" << std::endl;
  std::cout << std::endl;
  uintptr_t ptr = serialize(data_ptr);
  std::cout << "-----------------------" << std::endl;
  std::cout << "---- Serialization ----" << std::endl;
  std::cout << ptr << std::endl;
  std::cout << "-----------------------" << std::endl;
  std::cout << std::endl;
  std::cout << "-----------------------" << std::endl;
  std::cout << "----- Deserialize -----" << std::endl;

	Data		  *ret = deserialize(ptr);
  std::cout << "Adress: " << ret << std::endl;
  std::cout << "Value: " << ret->getValue() << std::endl;;
  std::cout << "-----------------------" << std::endl;
  if (ret == data_ptr)
  {
    std::cout << "Yes, our pointers are the same !" << std::endl;
  }
  else
  {
    std::cout << "Oh no, our pointers are different !" << std::endl;
  }
	delete data_ptr;
  std::cout << "-----------------------" << std::endl;
	return 0;
}
