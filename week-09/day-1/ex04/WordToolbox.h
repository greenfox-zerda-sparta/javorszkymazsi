#ifndef WORDTOOLBOX_H_
#define WORDTOOLBOX_H_
#include <iostream>
#include <map>

class WordToolbox {
public:
  WordToolbox(std::string _string_held);
  std::string get_string_held();
  void set_char_occurence(std::string str);
  void set_string_held(std::string new_string_held);
  bool is_ananagram(std::string string_to_check);
  unsigned int count_how_many(char char_to_find);
  bool is_uppercase(char character);
  char make_lowercase(char& character);
  virtual ~WordToolbox();
private:
  std::string string_held;
  std::map<char, unsigned int> char_occurence;
};

#endif /* WORDTOOLBOX_H_ */
