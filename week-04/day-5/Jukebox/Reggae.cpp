#include "Reggae.h"

Reggae::Reggae(std::string artist, std::string title, float rating) : Song(artist, title, rating) {
  this->genre = "Reggae";
}

Reggae::~Reggae() {

}
