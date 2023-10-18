#include <iostream>

int main() {

  int num{0};

  std::cin >> num;

  if (num == 0) 
  {
    std::cout << "0";
  }

  while (num > 0) 
  {
    std::cout << num % 2;
    num = num / 2;
  }

  std::cout << std::endl;

}