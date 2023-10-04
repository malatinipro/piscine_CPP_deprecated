/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:58:31 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 17:58:58 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main(void)
{
    int arr[5] = {1, 2, 4, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    std::vector<int> my_vector(arr, arr + n);
    std::cout << "The vector stores the collection {1, 2, 4, 6, 7}" << std::endl;
    try
    {
      easyfind(my_vector, 6);
    }
    catch (std::exception &e)
    {
      std::cout << e.what() << std::endl;
    }
    std::cout << "We'll be looking for the 10 value" << std::endl;
    try
    {
      easyfind(my_vector, 10);
    }
    catch (std::exception &e)
    {
        std::cout << e.what() << std::endl;
    }
    return (0);
}
