#include <string>
#include "Pirate.h"

using namespace std;

Pirate::Pirate(string name) {
  this->name = name;
  this->bottle = 0;
}

int Pirate::drink_rum() {
  return bottle += 1;
}

string Pirate::hows_goin_mate() {
  if (bottle <= 5) {
    return "Nothin\'";
  } else {
    return "Arrrrr!";
  }
}
