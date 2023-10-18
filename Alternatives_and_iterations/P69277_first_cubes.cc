#include <iostream>
#include <cmath>

int main() 
{

  int num{0};
  std::cin >> num;
  std::cout << "0";

  long int result{0};

  for(int i = 1; i <= num; i++) 
  {
    result = pow(i, 3);
    std::cout << "," << result;
  }

  std::cout << std::endl; 

}