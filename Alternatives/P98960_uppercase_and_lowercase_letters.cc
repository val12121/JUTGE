#include <iostream>

int main() 
{

  char letra;

  std::cin >> letra;

  char nueva;

  if (letra >= 97)
  {
    nueva = letra - 32;
    std::cout << nueva << std::endl;
  }
  else 
  {
    nueva = letra + 32;
    std::cout << nueva << std::endl; 

  }

}