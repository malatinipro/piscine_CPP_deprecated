/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhonebookClass.cpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 19:21:53 by user42            #+#    #+#             */
/*   Updated: 2023/10/04 12:02:26 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "./PhonebookClass.hpp"
#include "./ContactClass.hpp"

Phonebook::Phonebook(void)
{
    return ;
}

Phonebook::~Phonebook(void)
{
    return ;
}

void Phonebook::launch(void)
{
  std::string str;
  int         contact_num = 0;
  std::cout << "Welcome !" << std::endl;
  while (true)
  {
      std::cout << "Please type a command: ADD, SEARCH or EXIT" << std::endl;
      std::getline(std::cin, str);
      if (str == "ADD" || str == "add")
      {
          std::cout << "------------------------------------------" << std::endl;
          std::cout << "You typed ADD" << std::endl;
          if (contact_num >= 8)
          {
              std::cout << "You have too many contacts." << std::endl;
              std::cout << "New contacts will overwrite olders." << std::endl;
              contact_num = 0;
          }
          if (contact[contact_num].add_contact() == 1)
            contact_num++;
      }
      else if (str == "SEARCH" || str == "search")
      {
          std::cout << "------------------------------------------" << std::endl;
          std::cout << "You typed SEARCH" << std::endl;
          contact->search_contact(contact_num);
      }
      else if (str == "EXIT" || str == "exit" || std::cin.eof())
      {
          std::cout << "------------------------------------------" << std::endl;
          std::cout << "You typed EXIT" << std::endl;
          std::cout << "Phonebook is closing, contact(s) will be lost." << std::endl;
          exit (EXIT_SUCCESS);
      }
  }
}
