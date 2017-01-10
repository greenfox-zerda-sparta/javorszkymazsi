#include "OutputHandler.h"

OutputHandler::OutputHandler() {

}

void OutputHandler::print_welcome_message() {
  std::cout << "Welcome! Guess a word!" << std::endl;
}

void OutputHandler::print_hit_characters(std::string word, unsigned int word_length) {
  for (unsigned int i = 0; i < word_length; ++i) {
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
  std::cout << "Your guess was wrong :( " << character << " isn't in this word." << std::endl;
}

void OutputHandler::print_you_won() {
  std::cout << "You've won!!!" << std::endl;
}

OutputHandler::~OutputHandler() {
  // TODO Auto-generated destructor stub
}

