#include <iostream>
#include <stdlib.h>
#include <sstream>
#include <string>
#include <ctime>

#ifndef RANDNUMBER_H_
#define RANDNUMBER_H_

class RandNumber {
public:
  RandNumber();
  std::string get_num();
  ~RandNumber();
private:
  std::string num;
};

#endif /* RANDNUMBER_H_ */
