#ifndef OUTPUTHANDLER_H_
#define OUTPUTHANDLER_H_
#include <iostream>

class OutputHandler {
public:
  OutputHandler();
  void print_welcome_message();
  void print_characters(std::string);
  void print_guessed_right(std::string);
  void print_guessed_wrong(std::string);
  void print_you_won(std::string);
  virtual ~OutputHandler();
};

#endif
