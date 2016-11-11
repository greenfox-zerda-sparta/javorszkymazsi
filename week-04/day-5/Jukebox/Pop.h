#include "Song.h"

#ifndef POP_H_
#define POP_H_

class Pop : public Song {
public:
  Pop(std::string artist, std::string title, float rating);
  virtual ~Pop();
};

#endif /* POP_H_ */
