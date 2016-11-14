#include <iostream>
#include <string>
#include "Rock.h"
#include "Pop.h"
#include "Reggae.h"
#include "Jukebox.h"

using namespace std;

int main() {
  Rock highway_to_hell("AC/DC", "Highway To Hell", 1);
  highway_to_hell.add_rating(4);
  highway_to_hell.add_rating(2);
  cout << highway_to_hell.get_average_rating() << endl;
  cout << highway_to_hell.get_genre() << endl;
  cout << highway_to_hell.get_artist() << endl;
  cout << highway_to_hell.get_title() << endl;
  Jukebox cafe;
  cafe.add_song(highway_to_hell);

  return 0;
}
