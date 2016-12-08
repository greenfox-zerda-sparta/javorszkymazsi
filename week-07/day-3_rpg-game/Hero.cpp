/*
 * Hero.cpp
 *
 *  Created on: 2016 dec. 8
 *      Author: HP
 */

#include "Hero.h"

Hero::Hero() {
  this->x = 0;
  this->y = 0;
}

unsigned int Hero::move_up() {
  set_y(-1);
  set_image_file_name("hero-up.bmp");
  return y;
}

unsigned int Hero::move_right() {
  set_x(1);
  set_image_file_name("hero-right.bmp");
  return x;
}

unsigned int Hero::move_down() {
  set_y(1);
  set_image_file_name("hero-down.bmp");
  return y;
}

unsigned int Hero::move_left() {
  set_x(-1);
  set_image_file_name("hero-left.bmp");
  return x;
}

Hero::~Hero() {
  // TODO Auto-generated destructor stub
}

