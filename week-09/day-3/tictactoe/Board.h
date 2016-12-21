#ifndef BOARD_H_
#define BOARD_H_
#include <iostream>
#include <algorithm>
#include <vector>
#include <string>


class Board {
public:
  Board(unsigned int);
  std::vector<std::vector<unsigned int>> get_board();
  void print_board(unsigned int);
  void initialize_board_values(unsigned int);
  void set_coordinate_player_1(unsigned int, unsigned int);
  void set_coordinate_player_2(unsigned int, unsigned int);
private:
  std::vector<std::vector<unsigned int>> board; //0 for no one's there, 1 for player 1 and 2 for player 2
};

#endif
