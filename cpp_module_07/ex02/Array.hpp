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
  //Constructeur sans paramettre
  //cree un empty array
  Array(void): _arr(NULL), _size(0) {}
  //Constructeur avec paramettre
  //https://en.cppreference.com/w/cpp/language/default_initialization
  Array(unsigned int n): _arr(new T[n]), _size(n)
  {
    /* Pas besoin de ça pour l'initialisation par defaut
    int i = 0;
    while (i < n)
    {
      //Je mets 0 par défaut
      this->_arr[i] = 0;
      i++;
    }
    */
  }
  //Constructeur par copie
  Array(Array const &src)
  {
    //Deep copying the array
    this->_size = src._size;
    this->arr = new T[this->_size];
    //initialisation par defaut
    int i = 0;
    while (i < this->_size)
    {
      this->arr[i] = src._arr[i];
      i++;
    }
    return (*this);

    //Destructeur
    ~Array(void)
    {
      if (this->_arr)
        delete [] this->_arr;
    }

    //Operateur d'assignation
    Array &operator=(Array const &src)
    {
      if (this->size != 0 && this->size != src._size)
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
      if (index >= this->size)
        throw std::exception::OutofRangeException();
      else
        return (this->_arr[index]);
    }

private:
  T             *_arr;
  unsigned int  _size;
};

#endif
