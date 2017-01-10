#ifndef INPUTHANDLER_H_
#define INPUTHANDLER_H_
#include <iostream>

class InputHandler {
public:
  InputHandler();
  void demand_input(std::string&);
  virtual ~InputHandler();
};

#endif
