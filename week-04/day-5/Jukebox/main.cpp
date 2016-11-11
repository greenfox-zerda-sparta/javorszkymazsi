#include <iostream>
#include <string>
#include "Rock.h"

using namespace std;

int main() {
  Rock highway_to_hell("AC/DC", "Highway To Hell", 4.5);
  highway_to_hell.add_rating(3);
  highway_to_hell.add_rating(4);
  cout << highway_to_hell.get_average_rating() << endl;

  return 0;
}
