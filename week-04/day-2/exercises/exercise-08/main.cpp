#include <iostream>
#include <string>
#include "Pirate.h"

using namespace std;

int main() {
    // create a pirate class
    // it should have 2 methods
    // drink_rum()
    // hows_goin_mate()
    // if the drink_rum was called at least 5 times:
    // hows_goin_mate should return "Arrrr!"
    // "Nothin'" otherwise

  Pirate Suzy("Suzy Zelley");
  Suzy.drink_rum();
  Suzy.drink_rum();
  Suzy.drink_rum();
  cout << Suzy.hows_goin_mate() << endl;
  Suzy.drink_rum();
  Suzy.drink_rum();
  Suzy.drink_rum();
  Suzy.drink_rum();
  cout << Suzy.hows_goin_mate();
  return 0;
}
