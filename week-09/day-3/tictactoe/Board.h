#ifndef BOARD_H_
#define BOARD_H_
#include <iostream>
#include <algorithm>
#include <vector>

class Board {
public:
  Board();
  void construct_board(unsigned int);
  void initialize_board_values(unsigned int);
private:
  std::vector<std::vector<unsigned int>> board; //0 for no one's there, 1 for player 1 and 2 for player 2
};

#endif
