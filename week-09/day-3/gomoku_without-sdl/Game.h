#ifndef GAME_H_
#define GAME_H_
#include "Input.h"
#include "Analitics.h"


class Game {
public:
  Game();
  void run();
  bool won();
  void print_won();
private:
  Board board = Board (5);
  //void put_pick_on_board_player_1(unsigned int, unsigned int);
  //void put_pick_on_board_player_2(unsigned int, unsigned int);
};

#endif
