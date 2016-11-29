#include "MasterMind.h"

MasterMind::MasterMind() {
  std::cout << "This is Mastermind. You have 10 guesses. Shoot!" << std::endl;
  this->guesses = 10;
  this->num = RandNumber();
  std::cout << num.get_num() << std::endl;
  game();
}

void MasterMind::game() {
  std::string rand_num = num.get_num();
  for (int i = 0; i < guesses; ++i) {
    Input input;
    input.compare_strings(rand_num);
    if (input.get_input() == rand_num) {
      std::cout << "You won!" << std::endl;
      return;
    }
    std::cout << "You have " << input.get_bull() << " bulls and " << input.get_cow() << " cows. Try again!" << std::endl;
  }
}

MasterMind::~MasterMind() {
  // TODO Auto-generated destructor stub
}
