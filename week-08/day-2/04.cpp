#include <iostream>
#include <map>

// write a function that takes a string and returns a map
// the map should have the letters of the string as keys and
// it should have integers as values that represents how many times the
// letter appeared int the string

std::map<char, int> analyse_string(std::string str);

int main() {
  std::string str = "lalalalasddsgt";
  std::map<char, int> mapp = analyse_string(str);
  std::cout << str << " has ";
  for (std::map<char, int>::iterator it = mapp.begin(); it != mapp.end(); ++it) {
    std::cout << it->second << " " << it->first << "(s) ";
  }
  return 0;
}

std::map<char, int> analyse_string(std::string str) {
  std::map<char, int> my_map;
  for (unsigned int i = 0; i < str.size(); ++i) {
    my_map[str[i]] += 1;
  }
  return my_map;
}
