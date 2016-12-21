#include "Board.h"

Board::Board(unsigned int grid_size) {
  initialize_board_values(grid_size);
  print_board(grid_size);
}

std::vector<std::vector<unsigned int>> Board::get_board() {
  return board;
}

void Board::print_board(unsigned int grid_size) {
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

void Board::set_coordinate_player_1(unsigned int x, unsigned int y) {
  if (board[x][y] == 0) {
    board[x][y] = 1;
  } else {
    std::cout << "You can't write on the other player's field!" << std::endl;
  }
}

void Board::set_coordinate_player_2(unsigned int x, unsigned int y) {
  if (board[x][y] == 0) {
    board[x][y] = 2;
  } else {
    std::cout << "You can't write on the other player's field!" << std::endl;
  }
}
