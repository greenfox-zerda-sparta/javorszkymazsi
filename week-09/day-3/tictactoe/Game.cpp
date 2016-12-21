#include "Game.h"

Game::Game() {
  run();
}

void Game::run() {
  Input pick;
  put_pick_on_board(pick.get_pick_x(), pick.get_pick_y());
  board.construct_board(19);
  run();
}

void Game::put_pick_on_board(unsigned int x, unsigned int y) {
  board.set_coordinate(x, y);
}
