#include <iostream>
using namespace std;

int main() 
{

  int a{0};
  int b{0};

  std::cin >> a >> b;

  if (a > b) 
  {
    for (int i = a; i >= b; i--) 
    {
      cout << i << std::endl; 
    }
  } 
  else 
  {
    for (int i = b; i >= a; i--)
    {
      cout << i << std::endl; 
    }
  }

}