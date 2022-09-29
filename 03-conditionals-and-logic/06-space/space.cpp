#include <iostream>

int main() {
  
  // Little Mac is an interplanetary space boxer, who is trying to win championship belts for various weight categories on other planets within the solar system.
  double weight;
  int planet;
  double conversion;
  
  std::cout << "What is your earth weight? ";
  std::cin >> weight;

  std::cout << "1 Mercury\n";
  std::cout << "2 Venus\n";
  std::cout << "3 Mars\n";
  std::cout << "4 Jupiter\n";
  std::cout << "5 Saturn\n";
  std::cout << "6 Uranus\n";
  std::cout << "7 Neptune\n";

  std::cout << "Which planet do you want to compete at? ";
  std::cin >> planet;

  switch(planet){
    case 1 :
      conversion = weight * 0.38;
      std::cout << "Your weight on Mercury is " << conversion << ".\n";
      break;
    case 2 :
      conversion = weight * 0.91;
      std::cout << "Your weight on Mercury is " << conversion << ".\n";
      break;
    case 3 :
      conversion = weight * 0.38;
      std::cout << "Your weight on Mercury is " << conversion << ".\n";
      break;
    case 4 :
      conversion = weight * 2.34;
      std::cout << "Your weight on Mercury is " << conversion << ".\n";
      break;
    case 5 :
      conversion = weight * 1.06;
      std::cout << "Your weight on Mercury is " << conversion << ".\n";
      break;
    case 6 :
      conversion = weight * 1.92;
      std::cout << "Your weight on Mercury is " << conversion << ".\n";
      break;
    case 7 :
      conversion = weight * 1.19;
      std::cout << "Your weight on Mercury is " << conversion << ".\n";
      break;
    default :
      std::cout << "Please enter valid planet!\n";
  }

  return 0;
  
}
