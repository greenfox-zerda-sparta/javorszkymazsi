#include <iostream>
#include <string>

using namespace std;

int calculate_how_many_floppy_ears(int bunny_count);

int main() {
  cout << calculate_how_many_floppy_ears(10);
// We have a number of bunnies and each bunny has two big floppy ears.
// We want to compute the total number of ears across all the bunnies
// recursively (without loops or multiplication).

  return 0;
}

int calculate_how_many_floppy_ears(int bunny_count) {
  if (bunny_count == 0) {
    return bunny_count;
  } else {
    return 2 + calculate_how_many_floppy_ears(bunny_count - 1);
  }
}
