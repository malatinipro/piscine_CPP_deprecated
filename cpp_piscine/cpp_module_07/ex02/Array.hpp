#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <string>

//Déclaration d'un template de classe (canonique)
//on aurait pu faire un fichier tpp
//On va faire les définitions et déclarations au même endroit
template<typename T>
class Array
{
public:
  //cree un empty array
  Array(): _arr(NULL), _size(0) {;}
  //https://en.cppreference.com/w/cpp/language/default_initialization
  Array(unsigned int n): _arr(new T[n]), _size(n) {;}
  //Constructeur par copie
  Array(Array const &src)
  {
    //Deep copying the array
    this->_size = src._size;
    this->_arr = new T[this->_size];
    //initialisation par defaut
    unsigned int i = 0;
    while (i < this->_size)
    {
      this->_arr[i] = src._arr[i];
      i++;
    }
  }
   //Destructeur
  ~Array()
  {
    if (this->_arr)
      delete [] this->_arr;
  }
    //Operateur d'assignation
  Array &operator=(Array const &src)
  {
    if (this->_size != 0 && this->_size != src._size)
    {
      delete [] this->_array;
    }
    //on doit refaire le tableau
    this->_size = src._size;
    this->_array = new T[this->_size];
    int i = 0;
    while (i < this->_size)
    {
      this->_arr[i] = src._arr[i];
      i++;
    }
    return (*this);
  }

  //Surcharge d'operateur demandé dans le sujet
  T &operator[](unsigned int const &index)
  {
    if (index >= this->_size)
      //https://newbedev.com/how-to-throw-std-exceptions-with-variable-messages
      //https://stackoverflow.com/questions/12261915/how-to-throw-stdexceptions-with-variable-messages
      throw std::runtime_error(std::string("Out of range !"));
    else
      return (this->_arr[index]);
  }

  T &operator[](unsigned int const &index) const
  {
    if (index >= this->_size)
      //https://newbedev.com/how-to-throw-std-exceptions-with-variable-messages
      //https://stackoverflow.com/questions/12261915/how-to-throw-stdexceptions-with-variable-messages
      throw std::runtime_error(std::string("Out of range !"));
    else
      return (this->_arr[index]);
  }

private:
  T             *_arr;
  unsigned int  _size;
};

#endif
