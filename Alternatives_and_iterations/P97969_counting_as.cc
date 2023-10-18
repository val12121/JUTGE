#include <iostream>

int main() {

  std::string frase;
  std::getline(std::cin, frase);

  int num = 0; 

  for (int i = 0; i < frase.size(); i++) {
    if (frase[i] == 'a') {
      num++;
    }
  }

  std::cout << num << std::endl;

  return 0;

}