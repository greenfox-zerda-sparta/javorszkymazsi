/*
 * Character.cpp
 *
 *  Created on: 2016 dec. 8
 *      Author: HP
 */

#include "Character.h"

Character::Character() {

}

void Character::set_x(int amount) {
  x += amount;
}

void Character::set_y(int amount) {
  y += amount;
}

unsigned int Character::get_x() {
  return x;
}

unsigned int Character::get_y() {
  return y;
}

void Character::set_image_file_name(std::string new_image_file_name) {
  this->image_file_name = new_image_file_name;
}

std::string Character::get_image_file_name() {
  return image_file_name;
}

Character::~Character() {
  // TODO Auto-generated destructor stub
}

