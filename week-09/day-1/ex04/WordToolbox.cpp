#include "WordToolbox.h"

WordToolbox::WordToolbox(std::string _string_held) {
  this->string_held = _string_held;
  set_char_occurence(string_held);
}

void WordToolbox::set_char_occurence(std::string str) {
  char_occurence.clear();
  for (unsigned int i = 0; i < str.size(); ++i) {
    if (is_uppercase(str[i])) {
      make_lowercase(str[i]);
    }
    char_occurence[str[i]] += 1;
  }
}

std::string WordToolbox::get_string_held() {
  return string_held;
}

void WordToolbox::set_string_held(std::string new_string_held) {
  this->string_held = new_string_held;
  set_char_occurence(string_held);
}

bool WordToolbox::is_ananagram(std::string string_to_check) {
  if (string_held.size() != string_to_check.size()) {
    return false;
  }
  std::map<char, unsigned int> string_to_check_char_occurence;
  for (unsigned int i = 0; i < string_to_check.size(); ++i) {
    if (is_uppercase(string_to_check[i])) {
      make_lowercase(string_to_check[i]);
    }
    string_to_check_char_occurence[string_to_check[i]] += 1;
  }
  for (unsigned int i = 0; i < string_held.size(); ++i) {
    if (char_occurence[string_held[i]] != string_to_check_char_occurence[string_held[i]]) {
      return false;
    }
  }
  return true;
}

bool WordToolbox::is_uppercase(char character) {
  if ((unsigned int)character > 65 && (unsigned int)character < 97) {
    return true;
  }
  return false;
}

char WordToolbox::make_lowercase(char& character) {
  character += 32;
  return character;
}

unsigned int WordToolbox::count_how_many(char char_to_find) {
  if (is_uppercase(char_to_find)) {
    make_lowercase(char_to_find);
    return char_occurence[char_to_find];
  }
  return char_occurence[char_to_find];
}

WordToolbox::~WordToolbox() {

}

