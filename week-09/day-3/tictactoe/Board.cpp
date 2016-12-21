#include "Board.h"

Board::Board(unsigned int grid_size) {
  initialize_board_values(grid_size);
  construct_board(grid_size);
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

void Board::set_coordinate(unsigned int x, unsigned int y) {
  board[x][y] = 1;
}
