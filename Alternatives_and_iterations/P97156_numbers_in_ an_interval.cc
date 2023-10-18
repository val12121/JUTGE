#include <iostream>

int main() 
{

  int a{0};
  int b{0};

  std::cin >> b >> a;

  if (a >= b)
  {
    for (int i = b; i < a; i++) {
      std::cout << i << ",";
    }
    std::cout << a; 
  }
  std::cout << std::endl; 

}