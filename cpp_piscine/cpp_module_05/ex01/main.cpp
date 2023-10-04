/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:23:37 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 15:28:55 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

std::ostream  &operator<<(std::ostream &COUT, Form const &rhs);

int main(void)
{
  {
    Bureaucrat useful("Useful", 120);
    Form form1("FORM-120", 120, 120);
    useful.signForm(form1);
    std::cout << form1 << std::endl;
  }
  std::cout << std::endl;
  {
    Bureaucrat useless("Useless", 150);
    Form form2("FORM-120", 10, 1);
    useless.signForm(form2);
    std::cout << form2 << std::endl;
  }
  return (0);
}
