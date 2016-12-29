#include "Gomoku.h"
#include "Input.h"

Gomoku::Gomoku() {

}

void Gomoku::init(GameContext& context) {
  context.load_file("square.bmp");
  context.load_file("o.bmp");
  context.load_file("x.bmp");
}

void Gomoku::render(GameContext& context) {
  GameBoard gomoku(context, 19);
  game_board = gomoku.get_grid();
  context.render();
}

bool Gomoku::is_field_empty(int i, int j) {
  return (game_board[i][j] == 0);
}

void Gomoku::set_player_choice(int i, int j, int key) {
  game_board[i][j] == key;
}

void Gomoku::create_board(GameContext& context) {
  for (int i = 0; i < game_board.size(); i++) {
    for (int j = 0; j < game_board[i].size(); j++) {
      if (game_board[i][j] == 0) {
        context.draw_sprite("board.bmp", i * WIDTH, j * HEIGHT);
      }
      else if (game_board[i][j] == 1) {
        context.draw_sprite("x.bmp", i * WIDTH, j * HEIGHT);
      }
      else if (game_board[i][j] == 2) {
        context.draw_sprite("circle.bmp", i * WIDTH, j * HEIGHT);
      }
    }
  }
}

Gomoku::~Gomoku() {

}

