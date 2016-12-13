#include <iostream>
#include <map>
#include <vector>
#include <stdlib.h>
#include <time.h>


// Write a simple program that creates secret santa pairs
// It should read names till the character q is typed to the standard output,
// than it should print the names as secret santa pairs like:
// Clair - Mike
// Joe - Ron
// Cloe - Clair
// Ron - Cloe
// Mike - Joe


int main() {
  std::vector<std::string> names;
  std::string input;
  std::cin >> input;
  names.push_back(input);
  while (input != "q") {
    std::cin >> input;
    if(input != "q") {
      names.push_back(input);
    }
  }
  std::map<std::string, std::string> secret_santa_pairs;
  for (unsigned int i = 0; i < names.size(); ++i) {
    secret_santa_pairs[names[i]] = "";
  }
  for (std::map<std::string, std::string>::iterator it = secret_santa_pairs.begin(); it != secret_santa_pairs.end(); ++it) {
    int index = rand() % names.size();
    while (names[index] == it->first) {
      index = rand() % names.size();
    }
    it->second = names[index];
    names.erase(names.begin() + index);
  }
  for (std::map<std::string, std::string>::iterator it = secret_santa_pairs.begin(); it != secret_santa_pairs.end(); ++it) {
    std::cout << it->first << " - " << it->second << std::endl;
  }
  return 0;
}
