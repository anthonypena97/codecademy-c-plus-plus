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
  std::cout << "1) Hallway\n";
  std::cout << "2) Stairs\n\n";
    
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
  
  // STEP 3
  if(step == "Lab"){
    std::cout << "=============================================================\n\n";
    std::cout << "You have entered the lab.\n";
    std::cout << "You see a drawer on the left and a red curtain on the right.\n";
    std::cout << "Check the drawer or see what's behind the curtain?\n";
    std::cout << "1) Drawer\n";
    std::cout << "2) Curtain\n\n";
    
    for(int i = 0; i < 3 && choice3 != 1 && choice3 != 2; i++){
    
      std::cout << "Enter choice: ";
      std::cin >> choice3;
      std::cout << "\n";
        
      if(!(choice3) || choice3 > 2) {
        std::cin.clear(); //clear bad input flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard input
        std::cout << "Invalid input; please re-enter.\n";
      }
    }
    
    switch(choice3){
      case 1:
        step = "Drawer";
        points++;
        break;
      case 2:
        step = "Curtain";
        break;
      default:
        std::cout << "Invalid input!\n";
    }
    
  }
  else if(step == "Door"){
    std::cout << "=============================================================\n\n";
    std::cout << "You opened the door.\n";
    std::cout << "In front of you is a room full of old dusty furniture.\n";
    std::cout << "You see a dresser with a creeky door and a tall shelf.\n";
    std::cout << "Do you open the dresser or ruffle through the shelf?\n";
    std::cout << "1) Dresser\n";
    std::cout << "2) Shelf\n\n";
    
    for(int i = 0; i < 3 && choice3 != 1 && choice3 != 2; i++){
    
      std::cout << "Enter choice: ";
      std::cin >> choice3;
      std::cout << "\n";
        
      if(!(choice3) || choice3 > 2) {
        std::cin.clear(); //clear bad input flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard input
        std::cout << "Invalid input; please re-enter.\n";
      }
      
      switch(choice3){
        case 1:
          step = "Dresser";
          break;
        case 2:
          step = "Shelf";
          points++;
          break;
        default:
          std::cout << "Invalid input!\n";
      }
    }
  }
  else if(step == "Bedroom"){
    std::cout << "=============================================================\n\n";
    std::cout << "You entered the bedroom.\n";
    std::cout << "There's a closet door in front of you and a cardboard box.\n";
    std::cout << "Does the closet door interest you or do you look in the box?\n";
    std::cout << "1) Closet\n";
    std::cout << "2) Box\n\n";
    
    for(int i = 0; i < 3 && choice3 != 1 && choice3 != 2; i++){
    
      std::cout << "Enter choice: ";
      std::cin >> choice3;
      std::cout << "\n";
        
      if(!(choice3) || choice3 > 2) {
        std::cin.clear(); //clear bad input flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard input
        std::cout << "Invalid input; please re-enter.\n";
      }
    }
    
    switch(choice3){
      case 1:
        step = "Closet";
        break;
      case 2:
        step = "Box";
        points++;
        break;
      default:
        std::cout << "Invalid input!\n";
    }
    
  }
  else if(step == "TV Area"){
    std::cout << "=============================================================\n\n";
    std::cout << "You walked over towards the tv.\n";
    std::cout << "There is a ripped up rug and a beaten up couch.\n";
    std::cout << "Look under the rug or look through the couch?\n";
    std::cout << "1) Rug\n";
    std::cout << "2) Couch\n\n";
    
    for(int i = 0; i < 3 && choice3 != 1 && choice3 != 2; i++){
    
      std::cout << "Enter choice: ";
      std::cin >> choice3;
      std::cout << "\n";
        
      if(!(choice3) || choice3 > 2) {
        std::cin.clear(); //clear bad input flag
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); //discard input
        std::cout << "Invalid input; please re-enter.\n";
      }
      
      switch(choice3){
        case 1:
          step = "Couch";
          break;
        case 2:
          step = "Rug";
          points++;
          break;
        default:
          std::cout << "Invalid input!\n";
      }
    }
  }
  
  // Ending
  switch(points){
    case 1:
      std::cout << "=============================================================\n\n";
      std::cout << "Oh no! You fell down a trap door!\n\n";
      break;
    case 2:
      std::cout << "=============================================================\n\n";
      std::cout << "No key in sight! Try again!\n\n";
      break;
    case 3:
      std::cout << "=============================================================\n\n";
      std::cout << "Congratulations! You found the key!\n\n";
      break;
    default:
      std::cout << "=============================================================\n\n";
      std::cout << "Invalid Output!\n\n";
      break;
  }
  
  return 0;

}
