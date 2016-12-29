#include "Input.h"

Input::Input() {
  print_instructions();
  demand_input();
}

void Input::print_instructions() {
  std::cout << "Pick where your want to put your tile" << std::endl;
}

void Input::demand_input() throw (const char*) {
  std::cin >> pick_x;
  std::cin >> pick_y;
}

unsigned int Input::get_pick_x() {
  return pick_x;
}

unsigned int Input::get_pick_y() {
  return pick_y;
}
