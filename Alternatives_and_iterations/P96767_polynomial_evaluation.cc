#include <iostream>
#include <iomanip>
#include <cmath>

int main() {

  double x, num, resultado = 0;
  int i = 0;

  std::cin >> x;

  while (std::cin >> num) {
    resultado += num * pow(x, i);
    i++;
  }

  std::cout << std::setprecision(4) << std::fixed << resultado << std::endl;

}