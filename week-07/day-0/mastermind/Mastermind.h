#ifndef MASTERMIND_H_
#define MASTERMIND_H_

#include "Input.h"

class MasterMind {
public:
  MasterMind();
  void game();
  virtual ~MasterMind();
private:
  RandNumber num;
  int guesses;
};

#endif /* MASTERMIND_H_ */
