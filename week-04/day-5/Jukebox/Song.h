#include <string>

#ifndef SONG_H_
#define SONG_H_

class Song {
public:
  Song(std::string artist, std::string title, float rating);
  void add_rating(float new_rating);
  float get_rating(int index);
  float get_average_rating();
  void rock();
  void pop();
  void reggae();
  std::string get_genre();
  ~Song();
private:
  std::string title;
  std::string artist;
  bool is_rock = false;
  bool is_pop = false;
  bool is_reggae = false;
  float rating;
  int rating_count = 0;
};

#endif /* SONG_H_ */
