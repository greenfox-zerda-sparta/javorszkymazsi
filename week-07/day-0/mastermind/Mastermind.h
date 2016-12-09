#ifndef MASTERMIND_H_
#define MASTERMIND_H_

#include "Input.h"
#include "util.h"

class MasterMind {
public:
  MasterMind();
  void game();
  void how_many_bulls_and_cows(Input user_guess);
  void won();
  void lost();
  bool are_guesses_reached_maximum();
  bool can_guess();
  bool is_correct_guess(Input user_guess);
  virtual ~MasterMind();
private:
  std::string game_instructions;
  RandNumber secret_number;
  std::string secret_number_in_string;
  unsigned int initial_guesses;
  unsigned int guess_count;
};

#endif /* MASTERMIND_H_ */
