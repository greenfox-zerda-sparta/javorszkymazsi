#ifndef GOMOKU_H_
#define GOMOKU_H_
#include <vector>
#include "Analitics.h"
#include "GameContext.h"

class Gomoku {
public:
  Gomoku();
  void init(GameContext& context);
  void render(GameContext& context);
  bool is_field_empty(int i, int j);
  void set_player_choice(int, int, int);
  void create_board(GameContext&);
  void initialize_board();
  bool is_game_over();
private:
  std::vector<std::vector<int>> game_board;
};

#endif
