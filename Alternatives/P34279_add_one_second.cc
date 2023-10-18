#include <iostream>
#include <iomanip>

using namespace std;

int main() {

  int seconds{0};
  int minutes{0};
  int hours{0};

  cin >> hours >> minutes >> seconds;

  seconds = seconds + 1;
  if (seconds > 59) {
    seconds = 0;
    minutes++;
    
    if (minutes > 59) {
      minutes = 0;
      hours++;

      if (hours > 23) {
        hours = 0;
      }
    }
  }

  cout.fill('0');
  cout.width(2);
  cout << hours;
  cout << ":";

  cout.fill('0');
  cout.width(2);
  cout << minutes;
  cout << ":";

  cout.fill('0');
  cout.width(2);
  cout << seconds;
  cout << endl;

  return 0;
}