/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DataClass.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:36:37 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 12:36:46 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DATACLASS_HPP
#define DATACLASS_HPP

#include <iostream>
#include <string>

class Data
{
  public:
    Data(void);
    Data(Data const &src);
    Data(int value);
    virtual ~Data(void);

    Data &		operator=( Data const & rhs );
    int			getValue() const;

  private:
    int _value;
};

std::ostream &			operator<<( std::ostream & o, Data const & i );

#endif
