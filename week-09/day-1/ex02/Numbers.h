#ifndef NUMBERS_H_
#define NUMBERS_H_
#include <iostream>
#include <vector>

class Numbers {
public:
  Numbers();
  int sum(std::vector<int>& v);
  virtual ~Numbers();
};

#endif /* NUMBERS_H_ */
