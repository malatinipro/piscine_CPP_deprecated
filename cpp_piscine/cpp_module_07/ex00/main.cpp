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
  //return 0;
  std::cout << "-------- EXTRA TESTS --------" << std::endl;

  int i = 5;
  int j = 6;

  char aa = 'a';
  char bb = 'b';

  float f = 6.2f;
  float g = 10.32f;

  std::cout << "---------" << std::endl;
  std::cout << "Test swap" << std::endl;
  std::cout << "------------------------" << std::endl;
  std::cout << "i = " << i << ", j = " << j << std::endl;
  std::cout << "-----------" << std::endl;
  ::swap(i, j);
  std::cout << "i = " << i << ", j = " << j << std::endl;
  std::cout << "------------------------" << std::endl;
  std::cout << "aa = " << aa << ", bb = " << bb << std::endl;
  ::swap(aa, bb);
  std::cout << "-----------" << std::endl;
  std::cout << "aa = " << aa << ", bb = " << bb << std::endl;
  std::cout << "------------------------" << std::endl;
  std::cout << "f = " << f << ", g = " << g << std::endl;
  std::cout << "-----------" << std::endl;
  ::swap(f, g);
  std::cout << "f = " << f << ", g = " << g << std::endl;
  std::cout << "------------------------" << std::endl;

  std::cout << "---------" << std::endl;
  std::cout << "Test min" << std::endl;
  std::cout << "------------------------" << std::endl;
  std::cout << min(i, j) << std::endl;
  std::cout << min(aa, bb) << std::endl;
  std::cout << min(f, g) << std::endl;

  std::cout << "---------" << std::endl;
  std::cout << "Test max" << std::endl;
  std::cout << "------------------------" << std::endl;
  std::cout << max(i, j) << std::endl;
  std::cout << max(aa, bb) << std::endl;
  std::cout << max(f, g) << std::endl;
  return (0);
  std::cout << "------------------------" << std::endl;
}
