#include "Bureaucrat.hpp"

int main(void)
{
  {
    std::cout << "--- LOW BUREAUCAT ---" << std::endl;
    Bureaucrat junior("Junior", 150);
    std::cout << "--- INC TEST ---" << std::endl;
    try
    {
      junior.incGrade();
    }
    //catch demande dans le sujet
    catch(const std::exception &e)
    {
      std::cerr << e.what() << std::endl;
    }
    std::cout << "----------------" << std::endl;
    std::cout << "--- DEC TEST ---" << std::endl;
    try
    {
      junior.decGrade();
      junior.decGrade();
      //ne va pas executer les lignes qui suivent si erreur
    }
    catch(const std::exception &e)
    {
      std::cerr << e.what() << std::endl;
      std::cout << junior << std::endl;
    }
  }
  std::cout << "--- HIGH BUREAUCAT ---" << std::endl;
  {
    Bureaucrat ceo("CEO", 1);
    std::cout << "--- INC TEST ---" << std::endl;
    try
    {
      ceo.incGrade();
    }
    //catch demande dans le sujet
    catch(const std::exception &e)
    {
      std::cerr << e.what() << std::endl;
      std::cout << ceo << std::endl;
    }
    std::cout << "----------------" << std::endl;
    std::cout << "--- DEC TEST ---" << std::endl;
    try
    {
      ceo.decGrade();
    }
    catch(const std::exception &e)
    {
      std::cerr << e.what() << std::endl;
    }
  }
}
