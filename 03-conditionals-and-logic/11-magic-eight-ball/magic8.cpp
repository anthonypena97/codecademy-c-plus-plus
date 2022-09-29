#include <iostream>
#include <cstdlib>

int main(){

  // Your future here
  srand(time(NULL));
  int answer = std::rand() % 10;

  std::cout << "MAGIC 8-BALL: \n";

  switch(answer){
    case 0:
      std::cout << "It is certain.\n";
      break;
    case 1:
      std::cout << "Signs point to yes.\n";
      break;
    case 2:
      std::cout << "Ask again later.\n";
      break;
    case 3:
      std::cout << "Don't count on it.\n";
      break;
    case 4:
      std::cout << "Outlook good.\n";
      break;
    case 5:
      std::cout << "You may rely on it..\n";
      break;
    case 6:
      std::cout << "Concentrate and ask again.\n";
      break;
    case 7:
      std::cout << "Cannot predict now.\n";
      break;
    case 8:
      std::cout << "Very doubtful.\n";
      break;
    default:
      std::cout << "Try again.\n";
      break;
  }

  return 0;

}
