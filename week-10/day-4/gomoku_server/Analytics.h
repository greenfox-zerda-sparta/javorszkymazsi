#ifndef ANALYTICS_H_
#define ANALYTICS_H_
#include <vector>
#include <iostream>

class Analytics {
public:
  bool analyse_all(std::vector<std::vector<int>>&, int, int);
  bool is_five_vertically(std::vector<std::vector<int>>&, int, int);
  bool is_five_horizontally(std::vector<std::vector<int>>&, int, int);
  bool is_five_diagonally_from_left(std::vector<std::vector<int>>&, int, int);
  bool is_five_diagonally_from_right(std::vector<std::vector<int>>&, int, int);
  bool is_game_won(std::vector<std::vector<int>>&, int, int);
};

#endif
