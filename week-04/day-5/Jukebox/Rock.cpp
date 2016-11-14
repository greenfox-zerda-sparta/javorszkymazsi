#include "Rock.h"

Rock::Rock(std::string artist, std::string title, float rating) : Song(artist, title, rating) {
  this->genre = "Rock";
  if (rating > 2 && rating <= 5) {
    this->rating = rating;
  } else {
    std::cerr << "A rock song cannot have a rating of less than 2." << std::endl;
  }
}

void Rock::add_rating(float new_rating) {
  if (new_rating > 1 && new_rating <= 5) {
    ++rating_count;
    rating += new_rating;
  } else {
    std::cerr << "A rock song cannot have a rating of less than 2." << std::endl;
  }
}

Rock::~Rock() {

}
