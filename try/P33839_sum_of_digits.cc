#include <iostream>

int main () 
{
  int number{0};
  int realnumber{0};
  int resultado{0};

  while (std::cin >> number) {
  realnumber = number;

    while (number > 0) {
      resultado += number % 10;
      number = number/10;
    }

  std::cout << "The sum of the digits of " << realnumber << " is " << resultado << "." << std::endl;
  resultado = 0; 
  }

  return 0;
}
