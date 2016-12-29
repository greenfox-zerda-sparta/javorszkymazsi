#ifndef GAMEBOARD_H_
#define GAMEBOARD_H_
#include <vector>
#include "game-engine.h"

class GameBoard {
public:
  GameBoard(GameContext&, unsigned int);
  void initialize_board_values(unsigned int);
  void set_tiles(GameContext& context);
  std::vector<std::vector<unsigned int>> get_grid();
  ~GameBoard();
private:
  std::vector<std::vector<unsigned int>> grid;
};

#endif
