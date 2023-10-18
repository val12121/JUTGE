#include <iostream>
#include <iomanip>

int main () {

  double i = 0;
  double num = 0;
  double recogida = 0;

  while (std::cin >> num) {
    recogida += num;
    i++;
  }

  std::cout << std::setprecision(2) << std::fixed << recogida/i << std::endl;

}