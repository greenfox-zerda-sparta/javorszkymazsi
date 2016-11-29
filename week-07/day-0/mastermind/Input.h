#ifndef INPUT_H_
#define INPUT_H_

#include "RandNumber.h"

class Input {
public:
  Input();
  void compare_strings(std::string str);
  int get_bull();
  int get_cow();
  std::string get_input();
  ~Input();
private:
  std::string input;
  int cow;
  int bull;
};

#endif /* INPUT_H_ */
