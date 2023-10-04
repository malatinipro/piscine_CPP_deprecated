/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   brainClass.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 14:47:16 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 18:54:20 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>

class Brain
{
	public:
		Brain(void);
		Brain(Brain const & src);
		Brain(const std::string ideas[100]);
		virtual ~Brain(void);

		Brain	&operator=(Brain const & rhs);
		void	display_ideas(void) const;

	protected:
		std::string	ideas[100];
};
