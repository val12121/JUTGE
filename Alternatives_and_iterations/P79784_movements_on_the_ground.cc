#include <iostream>
#include <string>

int main() {

  int largo{0};
  int ancho{0};

  std::string direccion;

  std::cin >> direccion;

  for (int i = 0; i < direccion.size(); i++) {
    if (direccion[i] == 'n') {
      largo--;
    }
    if (direccion[i] == 's') {
      largo++;
    }
    if (direccion[i] == 'w') {
      ancho--;
    }
    if (direccion[i] == 'e') {
      ancho++;
    }
  }

  std::cout << "(" << ancho << ", "  << largo << ")" << std::endl;

}