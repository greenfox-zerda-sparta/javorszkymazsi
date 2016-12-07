/*
 * MyGame.h
 *
 *  Created on: 2016 dec. 7
 *      Author: HP
 */

#ifndef MYGAME_H_
#define MYGAME_H_

#include "game-engine.h"
#include <fstream>
#include <vector>

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
  }
  virtual void render(GameContext& context) {
    std::ifstream map_file("map-05.txt"); //TODO randomize file load
    std::vector<std::string> vector;
    std::string buffer;
    while (getline(map_file, buffer)) {
      vector.push_back(buffer);
    }
    map_file.close();
    for (unsigned int i = 0; i < 10; ++i) {
      for (unsigned int j = 0; j < 10; ++j) {
        if (vector[j][i] == '0') {
          context.draw_sprite("wall.bmp", i * 72, j * 72);
        } else {
          context.draw_sprite("floor.bmp", i * 72, j * 72);
        }
      }
    }


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
