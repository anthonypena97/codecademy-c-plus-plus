#include <iostream>
#include <vector>
  
// Use g++ -std=c++11 when compliling

int main() {
  
  int total_even = 0;
  int product_odd = 1;

  std::vector<int> numbers = {2, 4, 3, 6, 1, 9};
  
  for(int i = 0; i < numbers.size(); i++){

    if(numbers[i] % 2 == 0){
      total_even = total_even + numbers[1];
    } else {
      product_odd = product_odd * numbers[i];
    }

  }
  
  std::cout << "Sum of even numbers is "<< total_even << "\n";
  std::cout << "Product of odd numbers is "<< product_odd << "\n";
  
}
