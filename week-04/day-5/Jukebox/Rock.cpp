#include "Rock.h"

Rock::Rock(std::string artist, std::string title, float rating) : Song(artist, title, rating) {
  this->genre = "Rock";
}

Rock::~Rock() {

}
