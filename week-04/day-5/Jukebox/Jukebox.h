#include "Song.h"

#ifndef JUKEBOX_H_
#define JUKEBOX_H_

class Jukebox {
public:
  Jukebox();
  void add_song(Song& song);
  virtual ~Jukebox();
private:
  Song** songs;
  int song_count;
};

#endif /* JUKEBOX_H_ */
