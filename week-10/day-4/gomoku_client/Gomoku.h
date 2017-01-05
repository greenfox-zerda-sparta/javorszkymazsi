#ifndef GOMOKU_H_
#define GOMOKU_H_
#include <SDL_net.h>
#include <vector>
#include "Analytics.h"
#include "GameContext.h"

class Gomoku {
public:
  Gomoku();
  void init(GameContext&);
  void render(GameContext&);
  bool is_field_empty(int, int);
  void set_player1_choice(int, int);
  void set_player2_choice(int, int);
  void send_coordinates(int, int, TCPsocket&);
  int* receive_coordinates(TCPsocket&);
  void create_board(GameContext&);
  void initialize_board();
  bool is_game_over(int, int);
private:
  std::vector<std::vector<int>> game_board;
};

#endif
