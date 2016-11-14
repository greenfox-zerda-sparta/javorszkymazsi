#include <iostream>
#include <string>
#include "Rock.h"
#include "Pop.h"
#include "Reggae.h"
#include "Jukebox.h"

using namespace std;

int main() {
  Rock highway_to_hell("AC/DC", "Highway To Hell", 4);
  highway_to_hell.add_rating(4);
  highway_to_hell.add_rating(2);
  cout << highway_to_hell.get_average_rating() << endl;
  cout << highway_to_hell.get_genre() << endl;
  cout << highway_to_hell.get_artist() << endl;
  cout << highway_to_hell.get_title() << endl;
  Jukebox cafe;
  cafe.add_song(highway_to_hell);
  cafe.add_rating_by_title_and_artist("Highway To Hell", "AC/DC", 4.5);
  cout << highway_to_hell.get_average_rating() << endl;
  Rock thunderstruck("AC/DC", "Thunderstruck", 4);
  thunderstruck.add_rating(3);
  thunderstruck.add_rating(4.5);
  cafe.add_song(thunderstruck);
  cout << thunderstruck.get_average_rating() << endl;
  cout << cafe.get_average_rating_by_artist("AC/DC") << endl;
  cout << cafe.get_average_rating_by_genre("Rock") << endl;
  cout << cafe.get_top_rated_title() << endl;
  return 0;
}
