/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: malatini <malatini@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 18:34:56 by malatini          #+#    #+#             */
/*   Updated: 2021/10/12 15:57:03 by malatini         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//iostream sert pour les redirections de fluxs, donc pour le cout et cin
#include <iostream>
#include <cctype>

int	main(int argc, char **argv)
{
	int i;
	int j;

	i = 1;
	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (i < argc)
	{
		j = 0;
		while (argv[i][j])
		{
			//On doit convertir en char pour ne pas afficher des digits
			std::cout << (char)toupper(argv[i][j]);
			j++;
		}
		i++;
	}
	//Ajout d'un retour à la ligne final à la sortie standard
	std::cout << std::endl;
	return (0);
}
