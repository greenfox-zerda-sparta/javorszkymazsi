#include "MyGame.h"

MyGame::MyGame() {
  board_vector = std::vector<std::vector<int>>(19, std::vector<int>(19, 0));
}

void MyGame::init(GameContext& context) {
  context.load_file("tile.bmp");
  context.load_file("tyuk.bmp");
  context.load_file("tojas.bmp");
}

void MyGame::set_board(int i, int j, int key) {
  board_vector[i][j] = key;
}

void MyGame::create_board(GameContext& context) {
  for (int i = 0; i < board_vector.size(); i++) {
    for (int j = 0; j < board_vector[i].size(); j++) {
      if (board_vector[i][j] == 0) {
        context.draw_sprite("tile.bmp", i * WIDTH, j * HEIGHT);
      }
      else if (board_vector[i][j] == 1) {
        context.draw_sprite("tyuk.bmp", i * WIDTH, j * HEIGHT);
      }
      else if (board_vector[i][j] == 2) {
        context.draw_sprite("tojas.bmp", i * WIDTH, j * HEIGHT);
      }
    }
  }
}

bool MyGame::check_if_field_is_empty(int i, int j) {
  return (board_vector[i][j] == 0);
}

void MyGame::set_vector_to_null() {
  board_vector = std::vector<std::vector<int>>(19, std::vector<int>(19, 0));
}

void MyGame::render(GameContext& context) {
  create_board(context);
  context.render();
}

MyGame::~MyGame() {

}
