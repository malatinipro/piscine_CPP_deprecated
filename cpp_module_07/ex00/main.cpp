#include "whatever.hpp"

int main(void)
{
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
}
