#include "Reggae.h"

Reggae::Reggae(std::string artist, std::string title, float rating) : Song(artist, title, rating) {
  this->genre = "Reggae";
  if (rating > 0 && rating <= 4) {
    this->rating = rating;
  } else {
    std::cerr << "A reggae song cannot have a rating of more than 4." << std::endl;
  }
}

void Reggae::add_rating(float new_rating) {
  if (new_rating > 0 && new_rating <= 4) {
    ++rating_count;
    rating += new_rating;
  } else {
    std::cerr << "A reggae song cannot have a rating of more than 4." << std::endl;
  }
}

Reggae::~Reggae() {

}
