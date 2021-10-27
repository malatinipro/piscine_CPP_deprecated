#include "Bureaucrat.hpp"
#include "Form.hpp"

std::ostream &			operator<<(std::ostream &COUT, Form const &rhs);

int main(void)
{
  std::cout << "--- USEFUL BUREAUCRAT ---" << std::endl;
  {
    Bureaucrat useful("Useful", 120);
    std::cout << "-----" << std::endl;
    Form form1("FORM-120", 120, 120);
    std::cout << "-----" << std::endl;
    useful.signForm(form1);
    std::cout << form1 << std::endl;
    std::cout << "-----" << std::endl;
  }
  std::cout << std::endl;
  std::cout << "--- USELESS BUREAUCRAT ---" << std::endl;
  {
    Bureaucrat useless("Useless", 150);
    std::cout << "-----" << std::endl;
    Form form2("FORM-120", 10, 1);
    std::cout << "-----" << std::endl;
    useless.signForm(form2);
    std::cout << form2 << std::endl;
    std::cout << "-----" << std::endl;
  }
  return (0);
}
