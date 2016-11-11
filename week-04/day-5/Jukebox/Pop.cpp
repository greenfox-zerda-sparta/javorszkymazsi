#include "Pop.h"

Pop::Pop(std::string artist, std::string title, float rating) : Song(artist, title, rating) {
  this->genre = "Pop";
}

Pop::~Pop() {

}
