#include <iostream>

int main() {

  int num {0};
  int i {0};

  std::cin >> num;

  if (num == 0) {
    i = 1;
  }

  int numero = num;

  while (num > 0) 
  {
    num /= 10; 
    i++;
  }

  std::cout << "The number of digits of " << numero << " is " << i++ << "." << std::endl;
  return 0; 

}