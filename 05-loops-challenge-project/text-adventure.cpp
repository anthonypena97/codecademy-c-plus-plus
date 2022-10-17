#include <iostream>

int main(){

  int points = 0;
  int step = 0;
  int choice1 = 0;
  int choice2 = 0;
  int choice3 = 0;
  
  std::cout << "\n";
  std::cout << "=========================\n";
  std::cout << "=====  ESCAPE ROOM  =====\n";
  std::cout << "==   .--.              ==\n";
  std::cout << "==  |.-. '----------.  ==\n";
  std::cout << "==  |'-' .--'--''-'-'  ==\n";
  std::cout << "==   '--'              ==\n";
  std::cout << "=========================\n";
  std::cout << "\n";

  std::cout << "You're found in a dungeon!\n";
  std::cout << "There's a locked door in front of you.\n";
  std::cout << "You need to find a key in order to escape.\n\n";

  std::cout << "You see a set of stairs and hallway.\n";
  std::cout << "Where do you choose to explore?\n";
  std::cout << "1) Stairs\n";
  std::cout << "2) Hallway\n\n";
    
  for(int i = 0; i < 3 && choice1 != 1 && choice1 != 2; i++){
    
    std::cout << "Enter choice: ";
    std::cin >> choice1;
      
    if(!(choice1) || choice1 > 2) {
      std::cin.clear(); //clear bad input flag
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard input
      std::cout << "Invalid input; please re-enter.\n";
    }
    
  }
  
  return 0;

}
