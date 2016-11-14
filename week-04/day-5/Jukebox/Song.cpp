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

float Song::get_average_rating() {
  return rating / rating_count;
}

std::string Song::get_genre() {
  return this->genre;
}

std::string Song::get_title() {
  return this->title;
}

std::string Song::get_artist() {
  return this->artist;
}

float Song::get_rating() {
  return this->rating;
}

int Song::get_rating_count() {
  return this->rating_count;
}

Song::~Song() {

}
