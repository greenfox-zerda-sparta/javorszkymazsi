#include <iostream>
#include <string>

#ifndef SONG_H_
#define SONG_H_

class Song {
public:
  Song(std::string artist, std::string title, float rating);
  void add_rating(float new_rating);
  float get_rating(int index);
  float get_average_rating();
  std::string get_genre();
  std::string get_title();
  std::string get_artist();
  float get_rating();
  int get_rating_count();
  ~Song();
protected:
  std::string genre;
  float rating;
  int rating_count = 0;
private:
  std::string title;
  std::string artist;
};

#endif /* SONG_H_ */
