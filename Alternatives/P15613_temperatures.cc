#include <iostream>

int main() 
{

  int temperature{0};

  std::cin >> temperature;

  if (temperature > 30) 
  {
    std::cout << "it's hot" << std::endl;
    if (temperature >= 100) 
    {
      std::cout << "water would boil" << std::endl;
    }
  }

  else if (temperature <= 30 && temperature >= 10) {
    std::cout << "it's ok" << std::endl;
  }

  else 
  {
    std::cout << "it's cold" << std::endl; 
    if (temperature <= 0) 
    {
      std::cout << "water would freeze" << std::endl; 
    }
  }
}