#ifndef GAME_H_
#define GAME_H_
#include "Input.h"


class Game {
public:
  Game();
  void run();
  void put_pick_on_board(unsigned int, unsigned int);
private:
  Board board = Board (19);
};

#endif
