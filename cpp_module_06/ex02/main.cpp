#include <iostream>
//#include <ctime>

//Cas tout designe pour dynamic cast
class Base {
public:
	virtual ~Base(){}
};

class A : public Base {};
class B : public Base {};
class C : public Base {};

Base * generate(void)
{
  Base *base_ptr;
	std::srand(std::time(NULL));
  int nb = std::rand();
  if (nb % 3 == 0)
	{
		base_ptr = new A;
		std::cout << "Rand made us create a A instance" << std::endl;
	}
  else if (nb % 3 == 1)
	{
		base_ptr = new B;
		std::cout << "Rand made us create a B instance" << std::endl;
	}
  else
	{
		std::cout << "Rand made us create a C instance" << std::endl;
		base_ptr = new C;
	}
  return (base_ptr);
}

//Avec un pointeur c'est simple car s'il y a erreur ca renvoit null
void identify(Base *p)
{
  A * a = dynamic_cast<A *>(p);
	B * b = dynamic_cast<B *>(p);
	C * c = dynamic_cast<C *>(p);
  if (a != NULL)
		std::cout << "A";
	if (b != NULL)
		std::cout << "B";
	if (c != NULL)
		std::cout << "C";
  std::cout << std::endl;
}

//Avec une référence c'est plus complique puisqu'un ref ne peut pas etre nulle
void identify( Base & p) {
	try {
		A & a = dynamic_cast<A &>(p);
    (void)a;
		std::cout << 'A' << std::endl;
	}
	catch (...){;}
	try {
		B & b = dynamic_cast<B &>(p);
    (void)b;
		std::cout << 'B'<< std::endl;
	}
	catch (...){;}

	try {
		C & c = dynamic_cast<C &>(p);
    (void)c;
		std::cout << 'C' << std::endl;

	}
	catch (...){;}
}

int main(void)
{
	std::cout << "--------------------------" << std::endl;
	std::cout << "Invoking generate function" << std::endl;
	std::cout << "--------------------------" << std::endl;
  Base *test = generate();
	std::cout << "Identifying via pointer" << std::endl;
	std::cout << "--------------------------" << std::endl;
	identify(test);
	//une référence est toujours derefencee
	std::cout << "Identifying via reference" << std::endl;
	std::cout << "--------------------------" << std::endl;
	identify(*test);
  delete test;
	std::cout << "Memory freed" << std::endl;
	std::cout << "--------------------------" << std::endl;
  return (0);
}
