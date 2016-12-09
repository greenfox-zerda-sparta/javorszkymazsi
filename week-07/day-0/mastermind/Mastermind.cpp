#include "MasterMind.h"

MasterMind::MasterMind() {
  this->game_instructions = load_file("mastermind-instructions.txt");
  print_to_screen(game_instructions);
  this->secret_number = RandNumber();
  this->secret_number_in_string = secret_number.get_num();
  this->initial_guesses = 10;
  this->guess_count = 0;
  game();
}

void MasterMind::game() {
  while (can_guess()) {
    Input user_guess;
    user_guess.compare_strings(secret_number_in_string);
    ++guess_count;
    if (is_correct_guess(user_guess)) {
      won();
      return;
    }
    if (are_guesses_reached_maximum()) {
      lost();
      return;
    }
    how_many_bulls_and_cows(user_guess);
  }
}

void MasterMind::how_many_bulls_and_cows(Input user_guess) {
  std::cout << "You have " << user_guess.get_bull() << " bull(s) and " << user_guess.get_cow() << " cow(s). Try again!" << std::endl;
}

void MasterMind::won() {
  print_to_screen("You've guessed right and you won!");
}

void MasterMind::lost() {
  print_to_screen("I'm sorry but you've lost. The correct number was: " + secret_number_in_string + ".");
}

bool MasterMind::are_guesses_reached_maximum() {
  if (guess_count == initial_guesses) {
    return true;
  }
  return false;
}

bool MasterMind::can_guess() {
  if (guess_count <= initial_guesses) {
    return true;
  }
  return false;
}

bool MasterMind::is_correct_guess(Input user_guess) {
  if (user_guess.get_input() == secret_number_in_string) {
    return true;
  }
  return false;
}

MasterMind::~MasterMind() {

}
