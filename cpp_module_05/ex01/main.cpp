#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{
  std::cout << "--- USEFUL BUREAUCRAT ---" << std::endl;
  {
    Bureaucrat useful("Useful", 120);
    Form form1("FORM-120", 120, 120);
  }
  std::cout << "--- USELESS BUREAUCRAT ---" << std::endl;
  {
    Bureaucrat useless("Useless", 150);
    Form form2("FORM-120", 10, 1);
  }
  return (0);
}
