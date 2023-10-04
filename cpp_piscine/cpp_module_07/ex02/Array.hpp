/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:43:29 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 17:57:26 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>
#include <string>

template<typename T>
class Array
{
  public:
    Array(): _arr(NULL), _size(0) {;}

    Array(unsigned int n): _arr(new T[n]), _size(n) {;}

    Array(Array const &src)
    {
      this->_size = src._size;
      this->_arr = new T[this->_size];
      unsigned int i = 0;
      while (i < this->_size)
      {
        this->_arr[i] = src._arr[i];
        i++;
      }
    }

    ~Array()
    {
      if (this->_arr)
        delete [] this->_arr;
    }

    Array &operator=(Array const &src)
    {
      if (this->_size != 0 && this->_size != src._size)
      {
        delete [] this->_array;
      }
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

    T &operator[](unsigned int const &index)
    {
      if (index >= this->_size)
        throw std::runtime_error(std::string("Out of range !"));
      else
        return (this->_arr[index]);
    }

    T &operator[](unsigned int const &index) const
    {
      if (index >= this->_size)
        throw std::runtime_error(std::string("Out of range !"));
      else
        return (this->_arr[index]);
    }

  private:
    T             *_arr;
    unsigned int  _size;
};
