#include "GameBoard.h"

GameBoard::GameBoard(GameContext& context, unsigned int grid_size) {
  initialize_board_values(grid_size);
  set_tiles(context);
}

void GameBoard::initialize_board_values(unsigned int grid_size) {
  grid.resize(grid_size);
  for (unsigned int i = 0; i < grid_size; ++i) {
    for (unsigned int j = 0; j < grid_size; ++j) {
      grid[i].push_back(0);
    }
  }
}

void GameBoard::set_tiles(GameContext& context) {
  for (int i = 0; i < 19; ++i) {
    for (int j = 0; j < 19; ++j) {
      if (grid[j][i] == 1) {
        context.draw_sprite("0.bmp", i * WIDTH, j * HEIGHT);
      } else if (grid[j][i] == 2) {
        context.draw_sprite("x.bmp", i * WIDTH, j * HEIGHT);
      } else {
        context.draw_sprite("square.bmp", i * WIDTH, j * HEIGHT);
      }
    }
  }
}

std::vector<std::vector<unsigned int>> GameBoard::get_grid() {
  return grid;
}

GameBoard::~GameBoard() {

}

