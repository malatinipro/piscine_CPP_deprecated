#include "iter.hpp"

int main(void)
{
  std::cout << "------------------" << std::endl;
  std::cout << "Testing with chars" << std::endl;
  char test_c[5] = {'H', 'e', 'l', 'l', 'o'};
  int i = 0;
  while (i < 5)
  {
    std::cout << test_c[i] << std::endl;
    i++;
  }
  std::cout << "------------------" << std::endl;
  std::cout << "Calling iter function" << std::endl;
  iter(test_c, 5, my_test);
  std::cout << "------------------" << std::endl;
  std::cout << "Testing with ints" << std::endl;

  int test_i[3] = {1, 2, 3};
  i = 0;
  while (i < 3)
  {
    std::cout << test_i[i] << std::endl;
    i++;
  }
  std::cout << "------------------" << std::endl;
  std::cout << "Calling iter function" << std::endl;
  iter(test_i, 3, my_test);
  std::cout << "------------------" << std::endl;
  float test_f[3] = {0.02f, 15.2f, 14.0f};
  i = 0;
  std::cout << "Testing with floats" << std::endl;
  while (i < 3)
  {
    std::cout << test_f[i] << std::endl;
    i++;
  }
  std::cout << "------------------" << std::endl;
  std::cout << "Calling iter function" << std::endl;
  iter(test_f, 3, my_test);
  std::cout << "------------------" << std::endl;
  return (0);
}
