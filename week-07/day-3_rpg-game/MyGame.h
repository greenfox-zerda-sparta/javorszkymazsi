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
#include "Hero.h"
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
    std::vector<std::string> map = game_board.load_map();
    Hero hero;
    //game_board.set_floor(context);
    //game_board.set_wall(context);

    srand (time(NULL));
    unsigned int rand_j = rand() % 10;
    unsigned int rand_i = rand() % 10;
    while (map[rand_j][rand_i] == '0') {
      rand_j = rand() % 10;
      rand_i = rand() % 10;
    }
    context.draw_sprite("skeleton.bmp", rand_i * image_size_in_pixels, rand_j * image_size_in_pixels);

    if (context.was_key_pressed(ARROW_DOWN)) {
      if (y < 9 && map[y + 1][x] != '0') {
        y += hero.move_down();
        hero_file_name = hero.get_image_file_name();
      }
    }
    if (context.was_key_pressed(ARROW_RIGHT)) {
      if (x < 9 && map[y][x + 1] != '0') {
        x += hero.move_right();
        hero_file_name = hero.get_image_file_name();
      }
    }
    if (context.was_key_pressed(ARROW_UP)) {
      if (y > 0 && map[y - 1][x] != '0') {
        y += hero.move_up();
        hero_file_name = hero.get_image_file_name();
      }
    }
    if (context.was_key_pressed(ARROW_LEFT)) {
      if (x > 0 && map[y][x - 1] != '0') {
        x += hero.move_left();
        hero_file_name = hero.get_image_file_name();
      }
    }
    context.draw_sprite(hero_file_name, x * image_size_in_pixels, y * image_size_in_pixels);
    context.render();
  }
private:
  int x = 0;
  int y = 0;
  unsigned int image_size_in_pixels = 72;
  std::string hero_file_name = "hero-down.bmp";
};

#endif /* MYGAME_H_ */
