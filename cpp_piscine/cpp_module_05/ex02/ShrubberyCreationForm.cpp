/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mahautlatinis <mahautlatinis@student.42    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:27:30 by mahautlatin       #+#    #+#             */
/*   Updated: 2023/10/04 19:07:44 by mahautlatin      ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <fstream>

ShrubberyCreationForm::ShrubberyCreationForm():
	Form("ShrubberyFormCreation", 137, 145, "Default_target")
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &src):
	Form(src)
{
	return ;
}

ShrubberyCreationForm::ShrubberyCreationForm(const std::string target):
	Form("ShrubberyCreationForm", 137, 145, target)
{
	return ;
}

ShrubberyCreationForm::~ShrubberyCreationForm(void)
{
	return ;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(ShrubberyCreationForm const &rhs)
{
	(void)rhs;
	return *this;
}

void	ShrubberyCreationForm::execute(Bureaucrat const &executor)
{
	std::ofstream		output;
	const std::string	name = this->_target + "_shrubbery";
	try
	{
		Form::execute(executor);
		output.open(name.data(), std::ofstream::trunc | std::ofstream::out);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << std::endl;
		return ;
	}
	output << "           _  _             _  _" << std::endl;
	output << "  .       /\\\\/%\\       .   /%\\/%\\     ." << std::endl;
	output << "      __.<\\\\%#//\\,_       <%%#/%%\\,__  ." << std::endl;
	output << ".    <%#/|\\\\%%%#///\\    /^%#%%\\///%#\\\\" << std::endl;
	output << "      \"\"/%/\"\"\\ \\\"\"//|   |/\"\"\'/ /\\//\"//'" << std::endl;
	output << " .     L/'`   \\ \\  `    \"   / /  ```" << std::endl;
	output << "        `      \\ \\     .   / /       ." << std::endl;
	output << " .       .      \\ \\       / /  ." << std::endl;
	output << "        .        \\ \\     / /          ." << std::endl;
	output << "   .      .    ..:\\ \\:::/ /:.     .     ." << std::endl;
	output << "______________/ \\__;\\___/\\;_/\\________________________________" << std::endl;
	output << "YwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYwYw" << std::endl;
	output.close();
	output << "Form " << this->_name << " has been executed by " << executor.getName() << std::endl;
}
