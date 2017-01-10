#ifndef OUTPUTHANDLER_H_
#define OUTPUTHANDLER_H_
#include <iostream>

class OutputHandler {
public:
  OutputHandler();
  void print_welcome_message();
  void print_hit_characters(std::string, unsigned int);
  void print_guessed_right(std::string);
  void print_guessed_wrong(std::string);
  void print_you_won();
  virtual ~OutputHandler();
};

#endif
