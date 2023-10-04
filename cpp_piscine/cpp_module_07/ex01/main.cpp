/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:42:46 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 12:43:13 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main(void)
{
  char test_c[5] = {'H', 'e', 'l', 'l', 'o'};
  int i = 0;
  while (i < 5)
  {
    std::cout << test_c[i] << std::endl;
    i++;
  }
  iter(test_c, 5, my_test);

  int test_i[3] = {1, 2, 3};
  i = 0;
  while (i < 3)
  {
    std::cout << test_i[i] << std::endl;
    i++;
  }
  iter(test_i, 3, my_test);

  float test_f[3] = {0.02f, 15.2f, 14.0f};
  i = 0;

  while (i < 3)
  {
    std::cout << test_f[i] << std::endl;
    i++;
  }
  iter(test_f, 3, my_test);
  return (0);
}
