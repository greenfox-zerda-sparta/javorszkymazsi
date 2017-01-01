#ifndef GOMOKU_H_
#define GOMOKU_H_
#include <vector>
#include "game-engine.h"
#include "Analitics.h"

class Gomoku : public Game {
public:
  Gomoku();
  virtual void init(GameContext& context);
  virtual void render(GameContext& context);
  virtual bool is_field_empty(int i, int j);
  virtual void set_player_choice(int, int, int);
  virtual void create_board(GameContext&);
  virtual void initialize_board();
  virtual bool is_game_over();
private:
  std::vector<std::vector<int>> game_board;
};

#endif
