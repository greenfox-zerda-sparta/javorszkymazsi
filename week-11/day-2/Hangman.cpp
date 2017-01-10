#include "Hangman.h"

Hangman::Hangman() {
  read_file("file.txt");
  this->word_count = words.size();
  this->secret_word = pick_random_word();
  fill_guessed_word_with_zeros();
  output_handler.print_welcome_message();
  std::cout << secret_word << std::endl;
  run();
}

void Hangman::run() {
  while (!is_game_over()) {
    output_handler.print_characters(guessed_word);
    input_handler.demand_input(guessed_char);
    if (is_guessed_char_in_word()) {
      fill_guessed_word_with_char(guessed_char);
      output_handler.print_guessed_right(guessed_char);
    } else {
      output_handler.print_guessed_wrong(guessed_char);
    }
  }
  output_handler.print_you_won(secret_word);
  if (input_handler.is_y_pressed()) {
    secret_word = pick_random_word();
    guessed_word = "";
    fill_guessed_word_with_zeros();
    std::cout << secret_word << std::endl;
    run();
  }
}

std::vector<std::string> Hangman::read_file(std::string file_name) {
  std::ifstream source_file(file_name);
  std::string buffer;
  while (source_file >> buffer) {
    words.push_back(buffer);
  }
  source_file.close();
  return words;
}

std::string Hangman::pick_random_word() {
  srand (time(NULL));
  return words[rand() % word_count];
}

std::string Hangman::get_secret_word() {
  return secret_word;
}

std::string Hangman::get_guessed_word() {
  return guessed_word;
}

unsigned int Hangman::get_word_count() {
  return word_count;
}

void Hangman::fill_guessed_word_with_zeros() {
  for (unsigned int i = 0; i < secret_word.size(); ++i) {
    guessed_word.push_back('0');
  }
}

void Hangman::fill_guessed_word_with_char(std::string character) {
  for (unsigned int i = 0; i < secret_word.size(); ++i) {
    if (secret_word[i] == character[0]) {
      guessed_word[i] = character[0];
    }
  }
}

bool Hangman::is_guessed_char_in_word() {
  for (unsigned int i = 0; i < secret_word.size(); ++i) {
    if (secret_word[i] == guessed_char[0]) {
      return true;
    }
  }
  return false;
}

bool Hangman::is_game_over() {
  return (secret_word == guessed_word);
}

Hangman::~Hangman() {

}

