#include <iostream>
#include <vector>
#include <string>

int main(){

  // Whale, whale, whale.
  // What have we got here?

  std::vector<char> result;

  std::vector<char> vowels = {'a','e','i','o','u'};

  std::string words = "turpentine and turtles";

  for(int i = 0; i < words.size(); i++){
    for(int j = 0; j < vowels.size(); j++){
      if(words[i] == vowels[j]){
        result.push_back(words[i]);
      }
    }
    if(words[i] == 'u' || words[i] == 'e'){
        result.push_back(words[i]);
      }
  }

  for(int k = 0; k < result.size(); k++){
    std::cout << result[k];
  }

std::cout << "\n";

}
