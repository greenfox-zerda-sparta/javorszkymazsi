#ifndef HANGMAN_H_
#define HANGMAN_H_
#include <iostream>
#include <fstream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include "OutputHandler.h"
#include "InputHandler.h"

class Hangman {
public:
  Hangman();
  void run();
  std::vector<std::string> read_file(std::string);
  std::string pick_random_word();
  std::string get_secret_word();
  std::string get_guessed_word();
  unsigned int get_word_count();
  void fill_guessed_word_with_zeros();
  void fill_guessed_word_with_char(std::string);
  bool is_guessed_char_in_word();
  bool is_game_over();
  virtual ~Hangman();
private:
  std::vector<std::string> words;
  unsigned int word_count = 0;
  std::string secret_word;
  std::string guessed_word = "";
  OutputHandler output_handler;
  InputHandler input_handler;
  std::string guessed_char;
};

#endif
