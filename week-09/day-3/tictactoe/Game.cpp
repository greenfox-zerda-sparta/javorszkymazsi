#include "Game.h"

Game::Game() {
  run();
}

void Game::run() {
  Input pick;
  Analitics analysis;
  board.set_coordinate_player_1(pick.get_pick_x(), pick.get_pick_y());
  board.print_board(5);
  std::vector<std::vector<unsigned int>> game_board = board.get_board();
  if (won()) {
    print_won();
  }
  pick.print_instructions();
  pick.demand_input();
  board.set_coordinate_player_2(pick.get_pick_x(), pick.get_pick_y());
  board.print_board(5);
  run();
}

bool Game::won() {
  Analitics analysis;
  std::vector<std::vector<unsigned int>> game_board = board.get_board();
  if (analysis.analyse_all(game_board)) {
    return true;
  }
  return false;
}

void Game::print_won() {
  std::cout << "You've won!";
}
/*void Game::put_pick_on_board_player_1(unsigned int x, unsigned int y) {
  board.set_coordinate_player_1(x, y);
}

void Game::put_pick_on_board_player_2(unsigned int x, unsigned int y) {
  board.set_coordinate_player_2(x, y);
}*/
