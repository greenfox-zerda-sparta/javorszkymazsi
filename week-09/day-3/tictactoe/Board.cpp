#include "Board.h"

Board::Board() {
  initialize_board_values(19);
  construct_board(19);
}

void Board::construct_board(unsigned int grid_size) {
  std::cout << "=======================================" << std::endl;
  for (unsigned int i = 0; i < grid_size; ++i) {
    for (unsigned int j = 0; j < grid_size; ++j) {
      std::cout << "|" << board[j][i];
    }
    std::cout << "|" << std::endl << "=======================================" << std::endl;
  }
}

void Board::initialize_board_values(unsigned int grid_size) {
  board.resize(grid_size);
  for (unsigned int i = 0; i < grid_size; ++i) {
    for (unsigned int j = 0; j < grid_size; ++j) {
      board[i].push_back(0);
    }
  }
}
