#include <iostream>

int main() {
  
  // This variable stores my dog's age
  int dog_age = 3;

  // This variable stores the first two years of a dog's life in human years- which equals to 21 years
  int early_years = 21;

  // This variable calculates how many years a dog has lived beyond they're initial 2 years.
  int later_years = (dog_age - 2) * 4;

  // This variable calculates the sum of the first two dog years, which equates to 21 human years, and the the following years which only equate to 4 humans years per year.
  int human_years = early_years + later_years;

  std::cout << "My name is Leo! Ruff ruff, I am " << human_years << " years old in human years.\n";

}
