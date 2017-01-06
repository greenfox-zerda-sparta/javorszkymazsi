#include "Gomoku.h"

Gomoku::Gomoku() {
  initialize_board();
}

void Gomoku::init(GameContext& context) {
  context.load_file("tile.bmp");
  context.load_file("tojas.bmp");
  context.load_file("tyuk.bmp");
}

void Gomoku::render(GameContext& context) {
  create_board(context);
  context.render();
}

bool Gomoku::is_field_empty(int i, int j) {
  return (game_board[i][j] == 0);
}

void Gomoku::set_player1_choice(int x, int y) {
  if (is_field_empty(x, y)) {
    game_board[x][y] = 1;
  }
}

void Gomoku::set_player2_choice(int x, int y) {
  if (is_field_empty(x, y)) {
    game_board[x][y] = 2;
  }
}

void Gomoku::send_coordinates(int x, int y, TCPsocket& client) {
  int coordinates[2] = {x, y};
  SDLNet_TCP_Send(client, coordinates, 8);
}

int* Gomoku::receive_coordinates(TCPsocket& server) {
  int coordinates[2];
  SDLNet_TCP_Recv(server, coordinates, 8);
  return coordinates;
}

void Gomoku::initialize_board() {
  game_board = std::vector<std::vector<int>>(19, std::vector<int>(19, 0));
}

void Gomoku::create_board(GameContext& context) {
  for (int i = 0; i < game_board.size(); i++) {
    for (int j = 0; j < game_board[i].size(); j++) {
      if (game_board[i][j] == 0) {
        context.draw_sprite("tile.bmp", i * WIDTH, j * HEIGHT);
      } else if (game_board[i][j] == 1) {
        context.draw_sprite("tojas.bmp", i * WIDTH, j * HEIGHT);
      } else if (game_board[i][j] == 2) {
        context.draw_sprite("tyuk.bmp", i * WIDTH, j * HEIGHT);
      }
    }
  }
}

bool Gomoku::is_game_over(int x, int y) {
  Analytics analytics;
  if (analytics.is_game_won(this->game_board, x, y)) {
    return true;
  }
  return false;
}

