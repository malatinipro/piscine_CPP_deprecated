/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Karen.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:50:36 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 15:09:32 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

class Karen
{
    typedef void (Karen::*f)(void)const;

    public:
        Karen();
        ~Karen();

        void    complain(std::string level) const;

    private:
        void _debug(void) const;
        void _info(void) const;
        void _warning(void) const;
        void _error(void) const;
};
