#include <iostream>
#include <string>
#include "Song.h"

using namespace std;

int main() {
  Song highway_to_hell("AC/DC", "Highway To Hell", 4.5);
  highway_to_hell.add_rating(3);
  highway_to_hell.add_rating(4);
  cout << highway_to_hell.get_average_rating() << endl;
  highway_to_hell.rock();
  cout << highway_to_hell.get_genre() << endl;
  return 0;
}
