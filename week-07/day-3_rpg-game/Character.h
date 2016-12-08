/*
 * Character.h
 *
 *  Created on: 2016 dec. 8
 *      Author: HP
 */

#ifndef CHARACTER_H_
#define CHARACTER_H_

#include "GameBoard.h"

class Character {
public:
  Character();
  void set_x(int amount);
  void set_y(int amount);
  unsigned int get_x();
  unsigned int get_y();
  void set_image_file_name(std::string image_file_name);
  std::string get_image_file_name();
  virtual ~Character();
protected:
  unsigned int x = 0;
  unsigned int y = 0;
  unsigned int image_size_in_pixels = 72;
  std::string image_file_name;
};

#endif /* CHARACTER_H_ */
