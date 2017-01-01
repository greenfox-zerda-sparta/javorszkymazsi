#ifndef ANALITICS_H_
#define ANALITICS_H_
#include <vector>
#include <iostream>

class Analitics {
public:
  Analitics();
  bool analyse_all(std::vector<std::vector<int>>&);
  bool analyse_diagonally_from_left(std::vector<std::vector<int>>&);
  bool analyse_diagonally_from_right(std::vector<std::vector<int>>&);
  bool analyse_horizontally(std::vector<std::vector<int>>&);
  bool analyse_vertically(std::vector<std::vector<int>>&);
};

#endif
