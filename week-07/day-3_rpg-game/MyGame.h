/*
 * MyGame.h
 *
 *  Created on: 2016 dec. 7
 *      Author: HP
 */

#ifndef MYGAME_H_
#define MYGAME_H_

#include <fstream>
#include <vector>
#include <stdlib.h>
#include <time.h>
#include "GameBoard.h"

class MyGame : public Game {
public:
  MyGame() {}
  virtual void init(GameContext& context) {
    context.load_file("floor.bmp");
    context.load_file("wall.bmp");
    context.load_file("hero-down.bmp");
    context.load_file("hero-up.bmp");
    context.load_file("hero-left.bmp");
    context.load_file("hero-right.bmp");
    context.load_file("skeleton.bmp");
    context.load_file("boss.bmp");
  }
  virtual void render(GameContext& context) {
    GameBoard game_board(context);
    std::vector<std::string> vector = game_board.load_map();
    //game_board.set_floor(context);
    //game_board.set_wall(context);

    srand (time(NULL));
    unsigned int rand_j = rand() % 10;
    unsigned int rand_i = rand() % 10;
    while (vector[rand_j][rand_i] == '0') {
      rand_j = rand() % 10;
      rand_i = rand() % 10;
    }
    context.draw_sprite("skeleton.bmp", rand_i * 72, rand_j * 72);

    if (context.was_key_pressed(ARROW_DOWN)) {
      if (y < 648 && vector[y_move_count + 1][x_move_count] != '0') {
        y += 72;
        ++y_move_count;
        hero_file_name = "hero-down.bmp";
      }
    }
    if (context.was_key_pressed(ARROW_RIGHT)) {
      if (x < 648 && vector[y_move_count][x_move_count + 1] != '0') {
        x += 72;
        ++x_move_count;
        hero_file_name = "hero-right.bmp";
      }
    }
    if (context.was_key_pressed(ARROW_UP)) {
      if (y > 0 && vector[y_move_count - 1][x_move_count] != '0') {
        y -= 72;
        --y_move_count;
        hero_file_name = "hero-up.bmp";
      }
    }
    if (context.was_key_pressed(ARROW_LEFT)) {
      if (x > 0 && vector[y_move_count][x_move_count - 1] != '0') {
        x -= 72;
        --x_move_count;
        hero_file_name = "hero-left.bmp";
      }
    }
    context.draw_sprite(hero_file_name, x, y);
    context.render();
  }
private:
  int x = 0;
  int y = 0;
  int x_move_count = 0;
  int y_move_count = 0;
  std::string hero_file_name = "hero-down.bmp";
};

#endif /* MYGAME_H_ */
