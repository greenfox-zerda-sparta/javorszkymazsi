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
  std::ifstream map_file("map-05.txt"); //TODO randomize file load
  std::string buffer;
  while (getline(map_file, buffer)) {
    game_board.push_back(buffer);
  }
  map_file.close();
  return game_board;
}

void GameBoard::set_floor(GameContext& context) {
  for (unsigned int i = 0; i < 10; ++i) {
    for (unsigned int j = 0; j < 10; ++j) {
      if (game_board[j][i] == '1') {
        context.draw_sprite("floor.bmp", i * 72, j * 72);
      }
    }
  }
}

void GameBoard::set_wall(GameContext& context) {
  for (unsigned int i = 0; i < 10; ++i) {
    for (unsigned int j = 0; j < 10; ++j) {
      if (game_board[j][i] == '0') {
        context.draw_sprite("wall.bmp", i * 72, j * 72);
      }
    }
  }
}

GameBoard::~GameBoard() {
  // TODO Auto-generated destructor stub
}

