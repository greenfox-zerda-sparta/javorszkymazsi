#ifndef INPUTHANDLER_H_
#define INPUTHANDLER_H_
#include <iostream>

class InputHandler {
public:
  InputHandler();
  void demand_input(std::string&);
  bool is_y_pressed();
  virtual ~InputHandler();
};

#endif
