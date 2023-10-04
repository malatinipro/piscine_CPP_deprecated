/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:50:42 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 12:51:01 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./Karen.hpp"

int main(void)
{
	Karen	kar;

	kar.complain("DEBUG");
	kar.complain("INFO");
	kar.complain("WARNING");
	kar.complain("ERROR");
	return (0);
}
