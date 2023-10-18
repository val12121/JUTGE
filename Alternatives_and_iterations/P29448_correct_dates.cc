#include <iostream>
#include <iomanip>

int main () 
{
  int dia = 0;
  int mes = 0;
  int year = 0; 

  while (std::cin >> dia >> mes >> year) {
    
    if (dia <= 0 || dia > 31 || mes <= 0 || mes > 12 || year <= 0) 
    {
      std::cout << "Incorrect Date" << std::endl; 
    }

    else if (mes == 2) {
      if (year % 4 == 0 && dia > 29) {
        std::cout << "Incorrect Date" << std::endl;
      }
      else if (year % 4 != 0 && year % 100 != 0 && year % 400 == 0 && dia > 28) {
        std::cout << "Incorrect Date" << std::endl;
      }
      else if (year % 4 != 0 && dia <= 28) {
        std::cout << "Correct Date" << std::endl;
      }
      if (year % 4 == 0 && dia <= 29) {
        std::cout << "Correct Date" << std::endl;
      }
    }

    else if (mes == 4 || mes == 6 || mes == 9 || mes == 11) 
    {
      if (dia > 30) 
      {
        std::cout << "Incorrect Date" << std::endl;
      }
      else if (dia <= 30) {
        std::cout << "Correct Date" << std::endl;
      }
    }

    else if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10 || mes == 12) {
      std::cout << "Correct Date" << std::endl; 
    }
  }
} 