/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 13:00:59 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 18:01:58 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <vector>

class Span
{
  public:
    Span();
    Span(Span const &src);
    Span(unsigned int N);
    virtual ~Span();

    Span & operator=(Span const &src);

    void	            addNumber(int const nb);
    void              addRangeNumber(int a, int b);
    unsigned int      shortestSpan(void) const;
    unsigned int      longestSpan(void) const;
    unsigned int      getN(void) const;
    void              display(void) const;

  private:
    unsigned int      _N;
    std::vector<int>  _numbers;
};

std::ostream & operator<<(std::ostream &o, Span const &rhs);
