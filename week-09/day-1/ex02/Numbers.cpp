#include "Numbers.h"

Numbers::Numbers() {
  // TODO Auto-generated constructor stub

}

int Numbers::sum(std::vector<int>& v) {
  int sum = 0;
  for (std::vector<int>::iterator it = v.begin(); it != v.end(); ++it) {
    sum += *it;
  }
  return sum;
}

Numbers::~Numbers() {
  // TODO Auto-generated destructor stub
}

