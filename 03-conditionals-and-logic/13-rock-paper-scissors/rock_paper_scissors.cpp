// prompt user to select Rock, Paper, Scissors, Lizard or Spock
// computer randomly selects Rock, Paper, Scissors, Lizard or Spock
// compare the user and computer choices and determin winner
// inform the user who won

#include <iostream>
#include <stdlib.h>

int main(){

  // Live long and prosper
  srand(time(NULL));

  int computer = rand() % 5 + 1;
  std::string computerChoice;

  int user = 0;

  int rock = 1;
  int paper = 2;
  int scissors = 3;
  int lizard = 4;
  int spock = 5;

  std::cout << "====================\n";
  std::cout << "rock paper scissors!\n";
  std::cout << "====================\n";

  std::cout << "1)✊\n" ;
  std::cout << "2)✋\n" ;
  std::cout << "3)✌️\n" ;
  std::cout << "4)🤏\n" ;
  std::cout << "5)🖖\n" ;

  std::cout << "shoot! ";

  switch(computer){
    case 1:
      computerChoice = "✊";
      break;
    case 2:
      computerChoice = "✋";
      break;
    case 3:
      computerChoice = "✌️";
      break;
    case 4:
      computerChoice = "🤏";
      break;
    case 5:
      computerChoice = "🖖";
      break;
    default:
      std::cout << "error";
  }

  std::cin >> user;

  std::cout << "computer: " << computerChoice << "\n\n";

  if (user == rock && computer == scissors) {
    std::cout << "You Win!\n";
  } else if (user == scissors && computer == paper) {
    std::cout << "You Win!\n";
  } else if (user == paper && computer == rock) {
    std::cout << "You Win!\n";
  } else if (user == lizard && computer == spock) {
    std::cout << "You Win!\n";
  } else if (user == spock && computer == scissors) {
    std::cout << "You Win!\n";
  } else if (user == scissors && computer == lizard) {
    std::cout << "You Win!\n";
  } else if (user == lizard && computer == paper) {
    std::cout << "You Win!\n";
  } else if (user == paper && computer == spock) {
    std::cout << "You Win!\n";
  } else if (user == spock && computer == rock) {
    std::cout << "You Win!\n";
  } else if (user == rock && computer == lizard) {
    std::cout << "You Win!\n";
  } else if (user == computer) {
    std::cout << "Tie!\n";
  } else {
    std::cout << "You Lose!\n";
  }

}
