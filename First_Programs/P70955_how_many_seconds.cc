#include <iostream>

int main() {

    int years {0};
    int days {0};
    int hours {0};
    int minutes {0};
    int seconds {0};
 
    std::cin >> years >> days >> hours >> minutes >> seconds;
    std::cout << years*365*24*60*60 + days*24*60*60 + hours*60*60 + minutes*60 + seconds << std::endl; 

}
