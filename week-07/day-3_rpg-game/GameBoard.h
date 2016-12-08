/*
 * GameBoard.h
 *
 *  Created on: 2016 dec. 8
 *      Author: HP
 */

#ifndef GAMEBOARD_H_
#define GAMEBOARD_H_

#include <iostream>
#include <vector>
#include <fstream>
#include "game-engine.h"

class GameBoard {
public:
  GameBoard(GameContext& context);
  std::vector<std::string> load_map();
  void set_floor(GameContext& context);
  void set_wall(GameContext& context);
  virtual ~GameBoard();
private:
  std::vector<std::string> game_board;
};

#endif /* GAMEBOARD_H_ */
