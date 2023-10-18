#include <iostream>
#include <cmath>
#include <iomanip>

int main() {

  int num_funciones = 0;
  double ancho = 0;
  double alto = 0;
  double radio = 0;

  std::string forma;

  std::cin >> num_funciones;

  while (num_funciones != 0) {
    
    std::cin >> forma;

    if (forma == "rectangle") {
      std::cin >> ancho >> alto;
      std::cout << std::setprecision(6) << std::fixed << ancho*alto;
    }
    else {
      std::cin >> radio; 
      std::cout << std::setprecision(6) << std::fixed << radio * radio * M_PI;
    }  
    num_funciones--;
    std::cout << std::endl; 
  }

}