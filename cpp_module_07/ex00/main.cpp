#include "whatever.hpp"

int main(void)
{
  int a = 2;
  int b = 3;
  ::swap( a, b );
  std::cout << "a = " << a << ", b = " << b << std::endl;
  std::cout << "min( a, b ) = " << ::min( a, b ) << std::endl;
  std::cout << "max( a, b ) = " << ::max( a, b ) << std::endl;
  std::string c = "chaine1";
  std::string d = "chaine2";
  ::swap(c, d);
  std::cout << "c = " << c << ", d = " << d << std::endl;
  std::cout << "min( c, d ) = " << ::min( c, d ) << std::endl;
  std::cout << "max( c, d ) = " << ::max( c, d ) << std::endl;
  return 0;
  /*
  int i = 5;
  int j = 6;

  char a = 'a';
  char b = 'b';

  float f = 6.2f;
  float g = 10.32f;

  swap(i, j),
  swap(a, b);
  swap(f, g);

  min(i, j),
  min(a, b);
  min(f, g);

  max(i, j),
  max(a, b);
  max(f, g);
  return (0);
  */
}
