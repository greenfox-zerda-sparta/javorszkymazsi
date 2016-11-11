#ifndef ROCK_H_
#define ROCK_H_

#include "Song.h"

class Rock : public Song {
public:
  Rock(std::string artist, std::string title, float rating);
  virtual ~Rock();
};

#endif /* ROCK_H_ */
