#include "Song.h"

#ifndef REGGAE_H_
#define REGGAE_H_

class Reggae : public Song {
public:
  Reggae(std::string artist, std::string title, float rating);
  void add_rating(float new_rating);
  virtual ~Reggae();
};

#endif /* REGGAE_H_ */
