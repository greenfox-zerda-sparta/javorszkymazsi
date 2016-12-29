#ifndef INPUT_H_
#define INPUT_H_
#include <stdlib.h>
#include <cstring>
#include "Board.h"

class Input {
public:
  Input();
  void print_instructions();
  void demand_input() throw (const char*);
  void process_input();
  unsigned int get_pick_x();
  unsigned int get_pick_y();
private:
  unsigned int pick_x;
  unsigned int pick_y;
};

#endif
