/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:58:29 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 17:58:42 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

# include <iostream>
# include <string>
# include <algorithm>
# include <vector>
# include <list>
# include <deque>
# include <set>
# include <map>

template<typename T>
std::vector<int>::iterator easyfind(T &a, int n)
{
   std::vector<int>::iterator it = std::find(a.begin(), a.end(), n);
   if (it == a.end())
     throw std::runtime_error(std::string("Error. The element is not present"));
   std::cout << "Element found." << std::endl;
   std::cout << "The value is " << *it << std::endl;
   std::cout << "The memory address is " << &(*it) << std::endl;
   return (it);
}
