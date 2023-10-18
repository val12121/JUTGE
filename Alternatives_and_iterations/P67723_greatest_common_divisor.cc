#include <iostream>

int main() {

  int num1{0};
  int num2{0};

  std::cin >> num1 >> num2;

  int mayor;
  int menor;

  int maxdiv;

  if (num1 > num2) {
    mayor = num1;
    menor = num2;
  }

  else {
    mayor = num2;
    menor = num1;
  }

  for (int i = 1; i <= menor; i++) {
    if (mayor % i == 0 && menor % i == 0) {
      maxdiv = i; 
    }
  }

  std::cout << "The gcd of " << num1 << " and " << num2  << " is " << maxdiv << "." << std::endl;

}