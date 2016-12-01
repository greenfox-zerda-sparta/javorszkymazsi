#include "MasterMind.h"

MasterMind::MasterMind() {
  std::cout << "Hey there! This is Mastermind." << std::endl << std::endl;
  std::cout << "The purpose of this game is for you to guess 4 numbers in the right order. The numbers are between 0-9 and a number can only appear once." << std::endl;
  std::cout << "If you have the right number in the right place that means it's a BULL, if you have the right number but not in its right place that's a COW." << std::endl;
  std::cout << std::endl;
  std::cout << "You have 10 guesses. Good luck!" << std::endl;
  this->guesses = 10;
  this->num = RandNumber();
  game();
}

void MasterMind::game() {
  std::string rand_num = num.get_num();
  for (int i = 0; i < guesses; ++i) {
    Input input;
    input.compare_strings(rand_num);
    if (input.get_input() == rand_num) {
      std::cout << "You've guessed right and you won!" << std::endl;
      return;
    }
    std::cout << "You have " << input.get_bull() << " bull(s) and " << input.get_cow() << " cow(s). Try again!" << std::endl;
  }
  std::cout << "I'm sorry but you've lost. The correct number was: " << rand_num << std::endl;
}

MasterMind::~MasterMind() {

}
