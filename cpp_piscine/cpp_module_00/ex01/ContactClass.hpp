/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ContactClass.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:01:29 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 12:01:30 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CONTACTCLASS_HPP
#define CONTACTCLASS_HPP

#include <string>
#include <iomanip>
#include <iostream>

class Contact {
public:
    Contact(void);
    ~Contact(void);

    int            setter_first_name(std::string first_name);
    std::string    getter_first_name(void);
    int            setter_last_name(std::string last_name);
    std::string    getter_last_name(void);
    int            setter_nick_name(std::string nick_name);
    std::string    getter_nick_name(void);
    void           setter_phone_number(std::string phone_number);
    std::string    getter_phone_number(void);
    void           setter_darkest_secret(std::string phone_number);
    std::string    getter_darkest_secret(void);
    int            add_contact(void);
    void           display_all(void);
    void           search_contact(int contact_count);

private:
    std::string _first_name;
    std::string _last_name;
    std::string _nick_name;
    std::string _phone_number;
    std::string _darkest_secret;
};

#endif
