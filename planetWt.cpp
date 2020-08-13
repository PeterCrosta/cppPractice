#include <iostream>

int main() {
  double weight;
  int planet;
  double relWeight;
  std::cout << "What is your weight? ";
  std::cin >> weight;
  std::cout << "What planet do you want to fight on? ";
  std::cin >> planet;
  switch(planet){
    case 1 :
      relWeight = weight * 0.78;
      break;
    case 2 :
      relWeight = weight * 0.39;
      break;
    case 3 :
      relWeight = weight * 2.65;
      break;
    case 4 :
      relWeight = weight * 1.17;
      break;
    case 5 :
      relWeight = weight * 1.05;
      break;
    case 6 :
      relWeight = weight * 1.23;
      break;
    default :
      std::cout << "No such planet\n";
  }
  
  std::cout << "You will weigh " << relWeight << ".\n";
  
  
}