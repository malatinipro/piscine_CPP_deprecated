#include <iostream>
#include "Fixed.hpp"

Fixed const &	min(Fixed const & f1, Fixed const & f2);
Fixed const &	max(Fixed const & f1, Fixed const & f2);

Fixed &	min(Fixed & f1, Fixed & f2);
Fixed &	max(Fixed & f1, Fixed & f2);

int main(void) {
    std::cout << "--------- TESTS SUJETS ----------" << std::endl;
    Fixed a;
    /*
    v
    b.toInt();
    Fixed c(3.14f);
    c.toFloat();
    */
    //Fixed(10.0f);
    Fixed const b(Fixed(5.05f) * Fixed(2));
    //Test de la pre incrementation
    std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    //test de la post incrementation
   // std::cout << "Test de la post incrementation" << std::endl;
   // std::cout << "A is " << a << std::endl;
    std::cout << a++ << std::endl;
   // std::cout << "A is " << a << std::endl;
    //On va ajouter 1/246 eme a chaque fois donc environ 0.003962
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    Fixed const c(2);
    Fixed const d(5);
    //min et max
    std::cout << Fixed::max(a, b) << std::endl;
    //overloads
    std::cout << "-------------------" << std::endl;
    std::cout << "--------- TEST SUPPLEMENTAIRES ----------" << std::endl;
    std::cout << "--------- min / max overloads ----------" << std::endl;
    std::cout << Fixed::min(a, b) << std::endl;
    std::cout << max(a, b) << std::endl;
    std::cout << min(a, b) << std::endl;
    std::cout << max(c, d) << std::endl;
    std::cout << min(c, d) << std::endl;
    std::cout << "--------- decrementation ----------" << std::endl;
    std::cout << a << std::endl;
    std::cout << a-- << std::endl;
    std::cout << a << std::endl;
    std::cout << --a << std::endl;
    std::cout << a << std::endl;
    std::cout << "--------- ARITHMETIQUE ----------" << std::endl;
    std::cout << "Addition"<< std::endl;
    std::cout << c + d << std::endl;
    std::cout << "Soustraction"<< std::endl;
    std::cout << c - d << std::endl;
    std::cout << "Multiplication"<< std::endl;
    std::cout << c * d << std::endl;
    std::cout << "Division"<< std::endl;
    std::cout << c / d << std::endl;
    std::cout << "-------------------" << std::endl;
    std::cout << "--------- COMPARAISONS ----------" << std::endl;
    std::cout << (c > d) << std::endl;
    std::cout << (c < d) << std::endl;
    std::cout << (c >= d) << std::endl;
    std::cout << (c <= d)<< std::endl;
    std::cout << (c == d) << std::endl;
    std::cout << (c != d) << std::endl;
    return 0;
}
