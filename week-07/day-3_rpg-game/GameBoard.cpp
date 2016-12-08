/*
 * GameBoard.cpp
 *
 *  Created on: 2016 dec. 8
 *      Author: HP
 */

#include "GameBoard.h"

GameBoard::GameBoard(GameContext& context) {
  load_map();
  set_floor(context);
  set_wall(context);
}

std::vector<std::string> GameBoard::load_map() {
  std::ifstream map_file("map-01.txt"); //TODO randomize file load
  std::string buffer;
  while (getline(map_file, buffer)) {
    game_board.push_back(buffer);
  }
  map_file.close();
  return game_board;
}

void GameBoard::set_floor(GameContext& context) {
  for (unsigned int i = 0; i < game_board_x; ++i) {
    for (unsigned int j = 0; j < game_board_y; ++j) {
      if (game_board[j][i] == '1') {
        context.draw_sprite("floor.bmp", i * image_size_in_pixels, j * image_size_in_pixels);
      }
    }
  }
}

void GameBoard::set_wall(GameContext& context) {
  for (unsigned int i = 0; i < game_board_x; ++i) {
    for (unsigned int j = 0; j < game_board_y; ++j) {
      if (game_board[j][i] == '0') {
        context.draw_sprite("wall.bmp", i * image_size_in_pixels, j * image_size_in_pixels);
      }
    }
  }
}

GameBoard::~GameBoard() {
  // TODO Auto-generated destructor stub
}

