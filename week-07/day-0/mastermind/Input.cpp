#include "Input.h"

Input::Input() {
  std::cin >> input;
  this->bull = 0;
  this->cow = 0;

}

void Input::compare_strings(std::string str) {
  for (int i = 0; i < 4; ++i) {
    if (input[i] == str[i]) {
      ++bull;
    } else {
      for (int j = 0; j < 4; ++j) {
        if (input[i] == str[j]) {
          ++cow;
        }
      }
    }
  }
}

int Input::get_bull() {
  return bull;
}

int Input::get_cow() {
  return cow;
}

std::string Input::get_input() {
  return input;
}

Input::~Input() {

}
