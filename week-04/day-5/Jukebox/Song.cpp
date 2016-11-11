#include "Song.h"

Song::Song(std::string artist, std::string title, float rating) {
  this->title = title;
  this->artist = artist;
  this->rating = rating;
  ++rating_count;
}

void Song::add_rating(float new_rating) {
  if (new_rating >= 0 && new_rating <= 5) {
    ++rating_count;
    rating += new_rating;
  }
}

void Song::rock() {
  this->is_rock = true;
}

void Song::pop() {
  this->is_pop = true;
}

void Song::reggae() {
  this->is_reggae = true;
}

std::string Song::get_genre() {
  if (is_rock) {
    return "Rock";
  } else if (is_pop) {
    return "Pop";
  } else if (is_reggae) {
    return "Reggae";
  } else {
    return "Please set its genre first.";
  }
}

float Song::get_average_rating() {
  return rating / rating_count;
}

Song::~Song() {

}
