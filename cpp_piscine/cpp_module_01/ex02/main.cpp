#include <string>
#include <iostream>

/* Cet exercice permet de nous exercer sur les strings */
int main(void)
{
    std::string str("HI THIS IS BRAIN");
    std::string *stringPTR = &str;
    //Une reference est une sorte de pointeur toujours deferencee et jamais nulle
    std::string &stringREF = str;

    std::cout << "La valeur de string est : " << str << std::endl;
    std::cout << "La valeur de string via le pointeur dereference est : " << *stringPTR << std::endl;
    std::cout << "La valeur de string via la reference est : " << stringREF << std::endl;
    return (0);
}