#include <iostream>

int main() {
  
  double pesos;
  double reais;
  double soles;
  double dollars;

  std::cout << "Enter number of Colombian Pesos: ";
  std::cin >> pesos;

  std::cout << "Enter number of Brazilian Reais: ";
  std::cin >> reais;

  std::cout << "Enter number of Peruvian Soles: ";
  std::cin >> soles;

  // 09/25/2022 1 Colombian Peso equals 0.00023 Dollars
  double conversion_rate1 = 0.00023;
  // 09/25/2022 1 Brazilian Real equals 0.19 Dollars
  double conversion_rate2 = 0.19;
  // 09/25/2022 1 Peruvian Sol equals 0.25 Dollars
  double conversion_rate3 = 0.25;

  dollars = (conversion_rate1 * pesos) + (conversion_rate2 * reais) + (conversion_rate3 * soles);

  std::cout << "US Dollars = $" << dollars << "\n";

}
