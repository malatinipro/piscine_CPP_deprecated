#include "Karen.hpp"

int main(int argc, char **argv)
{
    (void)argv;
    Karen kar;
    if (argc != 2)
    {
        return (0);
    }
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int index = -1;
	for (int i = 0; i < 4; i++)
	{
		if ((std::string)argv[1] == (std::string)levels[i])
            index = i;
	}
    switch (index)
	{
        case 0:
            kar.complain("DEBUG");
            break;
        case 1:
            kar.complain("INFO");
            break;
        case 2:
            kar.complain("WARNING");
            break;
        case 3:
            kar.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]";
            break;
	}
    std::cout << std::endl;
    return (0);
}