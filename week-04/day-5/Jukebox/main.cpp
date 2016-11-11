#include <iostream>
#include <string>

using namespace std;

class Song {
public:
  Song(string artist, string title, float rating);
  void add_rating(float new_rating);
  float get_rating(int index);
  float get_average_rating();
  ~Song();
private:
  string title;
  string artist;
  float rating;
  int rating_count = 0;
};

Song::Song(string artist, string title, float rating) {
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

Song::~Song() {

}

int main() {
  Song highway_to_hell("AC/DC", "Highway To Hell", 4.5);
  highway_to_hell.add_rating(3);
  highway_to_hell.add_rating(4);
  cout << highway_to_hell.get_average_rating();
  return 0;
}
