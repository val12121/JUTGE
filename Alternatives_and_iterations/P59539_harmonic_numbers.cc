#include <iostream>
#include <iomanip>

int main() 
{
  int num{0};
  std::cin >> num;

  double result{0.0};

  for (double i = 1; i <= num; i++) {
    result += 1/i;
  }

  std::cout << std::fixed << std::setprecision(4) << result << std::endl; 

  return 0; 
}