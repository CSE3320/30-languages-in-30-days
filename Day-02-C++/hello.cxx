#include <iostream>

int main()
{
  std::cout << "Hello, World" << std::endl;

  std::string hello = "Hello, World";

  std::cout << hello << std::endl;

  std::cout << hello.c_str() << std::endl;

  return 0;
}
