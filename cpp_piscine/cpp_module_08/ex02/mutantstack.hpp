/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mutantstack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:02:34 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 18:03:32 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <stack>
# include <algorithm>

template<typename T>
class MutantStack: public std::stack<T>
{
  public:
    MutantStack() {}
    MutantStack(const MutantStack<T> &src)
    {
      *this = src;
      return ;
    }

    virtual ~MutantStack()
    {
      return ;
    }

    MutantStack<T> &operator=(const MutantStack<T> &rhs)
    {
      this->c = rhs.c;
      return (*this);
    }

    typedef typename std::stack<T>::container_type::iterator iterator;

    iterator begin()
    {
      return this->c.begin();
    }

    iterator end()
    {
      return this->c.end();
    }
};
