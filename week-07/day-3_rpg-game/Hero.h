/*
 * Hero.h
 *
 *  Created on: 2016 dec. 8
 *      Author: HP
 */

#ifndef HERO_H_
#define HERO_H_

#include "Character.h"

class Hero : public Character {
public:
  Hero();
  unsigned int move_up();
  unsigned int move_right();
  unsigned int move_down();
  unsigned int move_left();
  virtual ~Hero();
private:
  std::string image_file_name = "hero-down.bmp";
};

#endif /* HERO_H_ */
