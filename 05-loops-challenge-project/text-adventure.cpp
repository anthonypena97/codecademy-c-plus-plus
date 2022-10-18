#include <iostream>

int main(){

  int points = 0;
  int choice1 = 0;
  int choice2 = 0;
  int choice3 = 0;
  
  std::string step;
  
  std::cout << "\n";
  std::cout << "=============================================================\n";
  std::cout << "=======================  ESCAPE ROOM  =======================\n";
  std::cout << "====================   .--.              ====================\n";
  std::cout << "===================   |.-. '----------.   ===================\n";
  std::cout << "===================   |'-' .--'--''-'-'   ===================\n";
  std::cout << "====================   '--'              ====================\n";
  std::cout << "=============================================================\n";
  std::cout << "=============================================================\n";
  std::cout << "\n";

  // STEP 1
  std::cout << "=============================================================\n\n";
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
    std::cout << "\n";
      
    if(!(choice1) || choice1 > 2) {
      std::cin.clear(); //clear bad input flag
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard input
      std::cout << "Invalid input; please re-enter.\n";
    }
    
  }
  
  switch(choice1){
    case 1:
      step = "Hallway";
      points++;
      break;
    case 2:
      step = "Stairs";
      break;
    default:
      std::cout << "Invalid input!\n";
  }
  
  // STEP 2
  if(step == "Hallway"){
    std::cout << "=============================================================\n\n";
    std::cout << "You have gone down the hallway.\n";
    std::cout << "You see a door and a conspicuous lab.\n";
    std::cout << "Do you dare open the door or will you enter the lab?\n";
    std::cout << "1) Lab\n";
    std::cout << "2) Door\n\n";
    
    for(int i = 0; i < 3 && choice2 != 1 && choice2 != 2; i++){
    
      std::cout << "Enter choice: ";
      std::cin >> choice2;
      std::cout << "\n";
        
      if(!(choice2) || choice2 > 2) {
        std::cin.clear(); //clear bad input flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard input
        std::cout << "Invalid input; please re-enter.\n";
      }
    }
    
    switch(choice2){
      case 1:
        step = "Lab";
        break;
      case 2:
        step = "Door";
        points++;
        break;
      default:
        std::cout << "Invalid input!\n";
    }
    
  }
  else if(step == "Stairs"){
    std::cout << "=============================================================\n\n";
    std::cout << "You went up the stairs.\n";
    std::cout << "You see an empty bedroom and a flickering tv in the distance.\n";
    std::cout << "Do you enter the bedroom or do you investigate the tv area?\n";
    std::cout << "1) Bedroom\n";
    std::cout << "2) TV Area\n\n";
    
    for(int i = 0; i < 3 && choice2 != 1 && choice2 != 2; i++){
    
      std::cout << "Enter choice: ";
      std::cin >> choice2;
      std::cout << "\n";
        
      if(!(choice2) || choice2 > 2) {
        std::cin.clear(); //clear bad input flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard input
        std::cout << "Invalid input; please re-enter.\n";
      }
      
      switch(choice2){
        case 1:
          step = "Bedroom";
          points++;
          break;
        case 2:
          step = "TV Area";
          break;
        default:
          std::cout << "Invalid input!\n";
      }
    }
  }
  
  return 0;

}
