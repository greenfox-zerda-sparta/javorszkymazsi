#include "Song.h"

#ifndef JUKEBOX_H_
#define JUKEBOX_H_

class Jukebox {
public:
  Jukebox();
  void add_song(Song& song);
  void add_rating_by_artist_and_title(std::string artist, std::string title, float new_rating);
  float get_average_rating_by_artist(std::string artist);
  float get_average_rating_by_genre(std::string genre);
  std::string get_top_rated_title();
  std::string get_top_rated_genre();
  virtual ~Jukebox();
private:
  Song** songs;
  int song_count;
};

#endif /* JUKEBOX_H_ */
