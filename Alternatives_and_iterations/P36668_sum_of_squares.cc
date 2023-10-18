#include <iostream>

int main() 
{

  int num{0}; 
  std::cin >> num;

  int resultado{0};

  for (int i = 1; i <= num; i++) 
  {
    resultado += i*i;
  }

  std::cout << resultado << std::endl;

}