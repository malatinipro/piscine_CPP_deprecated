#include "Intern.hpp"

Intern::Intern()
{
	std::cout << "Intern default constructor called" << std::endl;
  return ;
}

Intern::~Intern()
{
	std::cout << "Intern default desconstructor called" << std::endl;
  return ;
}

Intern::Intern(Intern const & src)
{
	(void)src;
	std::cout << "Intern copy constructor called" << std::endl;
  //On ne peut rien copier puisqu'il n a aucun attribut
  return ;
}

Intern & Intern::operator=(Intern const & rhs)
{
	(void)rhs;
  std::cout << "Nothing to assign our intern" << std::endl;
	return *this;
}

//Pas le droit au if else if ou autre donv on va faire des tableaux
//Attention a bien checker les leaks
Form * Intern::makeForm(std::string name, std::string target)
{
  //Ecrit comme ca comme dans l'exemple du sujet
	std::string forms[3] = {"shrubbery creation", "robotomy request", "presidential pardon"};
  //Creation des trois fichiers pour ne pas avoir de if a faire
	Form * src[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};

  int i = 0;
	int check = 0;
  std::string form_to_create;
  while (i < 3)
  {
    if (forms[i] == name)
    {
      form_to_create = forms[i];
			check = i;
      break;
    }
    i++;
    //checker si le forme name existe bien
  }
	if (i == 3)
	{
		//Le form n a pas ete trouve
		throw std::runtime_error(std::string("Error. Form mentionned does not exist, the intern can not create it."));
		return (NULL);
	}
	i = 0;
	while (i < 3)
	{
		if (i != check)
		{
			delete src[i];
		}
		i++;
	}
	//Ok
	std::cout << "Inter creates " << name << std::endl;
	return NULL;
}
