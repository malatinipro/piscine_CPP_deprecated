/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonebookClass.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 19:23:33 by user42            #+#    #+#             */
/*   Updated: 2021/10/12 18:52:21 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOKCLASS_HPP
#define PHONEBOOKCLASS_HPP

#include <string>
#include <iomanip>
#include <iostream>
#include "./ContactClass.hpp"

class Phonebook {

public:
    Contact contact[8];
    Phonebook(void);
    ~Phonebook(void);

    void launch(void);
};
#endif
