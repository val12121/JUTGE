#include <iostream>

int main() {

  int num {0};

  std::cin >> num;

  if (num == 0) {
    std::cout << "0";
  }

  while (num > 0) {

    if (num % 16 < 10) {
      std::cout << num % 16;
      num = num / 16;  
    }

    else if (num % 16 == 10) {
      std::cout << "A";
      num = num / 16;  
    }

    else if (num % 16 == 11) {
      std::cout << "B";
      num = num / 16;  
    }
  
    else if (num % 16 == 12) {
      std::cout << "C";
      num = num / 16;  
    }

    else if (num % 16 == 13) {
      std::cout << "D";
      num = num / 16;  
    }

    else if (num % 16 == 14) {
      std::cout << "E";
      num = num / 16;  
    }

    else if (num % 16 == 15) {
      std::cout << "F";
      num = num / 16;  
    }

  }

  std::cout << std::endl;  
}