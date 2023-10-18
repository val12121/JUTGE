#include <iostream> 
#include <iomanip>
#include <cmath>

int main() {

  double x{0};
  double num{0};
  double resultado = 0;

  std::cin >> x; 

  while (std::cin >> num) {
    
    resultado *= x;
    resultado += num;

  }
  
  std::cout << std::fixed << std::setprecision(4) << resultado << std::endl;

}