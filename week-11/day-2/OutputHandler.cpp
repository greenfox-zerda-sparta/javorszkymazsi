#include "OutputHandler.h"

OutputHandler::OutputHandler() {

}

void OutputHandler::print_welcome_message() {
  std::cout << "Welcome! Guess a characters which add up to a word. Shoot!" << std::endl;
}

void OutputHandler::print_characters(std::string word) {
  for (unsigned int i = 0; i < word.size(); ++i) {
    if (word[i] == '0') {
      std::cout << "_ ";
    } else {
      std::cout << word[i] << " ";
    }
  }
  std::cout << std::endl;
}

void OutputHandler::print_guessed_right(std::string character) {
  std::cout << "You've guessed right! " << character << " is in this word!" << std::endl;
}

void OutputHandler::print_guessed_wrong(std::string character) {
  std::cout << "Your guess was wrong :( " << character << " isn't in this word. Try again!" << std::endl;
}

void OutputHandler::print_you_won(std::string secret_word) {
  std::cout << "You've won!!! The secret word was \"" << secret_word << "\"." << std::endl;
  std::cout << "Press y if you want to play again." << std::endl;
}

OutputHandler::~OutputHandler() {
  // TODO Auto-generated destructor stub
}

