/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonebookClass.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 19:23:33 by user42            #+#    #+#             */
/*   Updated: 2023/10/04 15:03:35 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <string>
# include <iomanip>
# include <iostream>
# include "./ContactClass.hpp"

class Phonebook {
    public:
        Contact contact[8];
        Phonebook(void);
        ~Phonebook(void);

        void launch(void);
};
