#include "./Karen.hpp"

int main(void)
{
    Karen	kar;

	std::cout << "--------------------------------------" << std::endl;
    std::cout << "DEBUG" << std::endl;
	kar.complain("DEBUG");
	std::cout << "--------------------------------------" << std::endl;
    std::cout << "INFO" << std::endl;
	kar.complain("INFO");
	std::cout << "--------------------------------------" << std::endl;
    std::cout << "WARNING" << std::endl;
	kar.complain("WARNING");
	std::cout << "--------------------------------------" << std::endl;
    std::cout << "ERROR" << std::endl;
	kar.complain("ERROR");
	return (0);
}