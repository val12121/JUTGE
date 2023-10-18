#include <iostream>

int main () {

  int num{0};

  std::cin >> num;

  if (num == 0) {
    std::cout << "0";
  }

  while (num > 0) {
    std::cout << num % 10;
    num = num / 10;
  }

  std::cout << std::endl; 

  return 0;

}