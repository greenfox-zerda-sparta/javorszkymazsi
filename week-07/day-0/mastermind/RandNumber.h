#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <string>

#ifndef RANDNUMBER_H_
#define RANDNUMBER_H_

class RandNumber {
public:
  RandNumber();
  std::string get_num();
  void find_num();
  ~RandNumber();
private:
  std::string num;
  int first;
  int second;
  int third;
  int fourth;
};

#endif /* RANDNUMBER_H_ */
