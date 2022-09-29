#include <iostream>

int main() {
  
  int y;

  std::cout << "Enter a year: ";
  std::cin >> y;

  if(y < 1000 || y > 9999 ){
    std::cout << "Please enter a 4 digit number...\n";
  }
  else if((y % 4 == 0 && y % 100 != 0) || y % 400 == 0){

    std::cout << y << " is a leap year!\n";

  }
  else {

    std::cout << y << " is not a leap year.\n";

  }
  
  return 0;

}
