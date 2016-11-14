#include "Jukebox.h"

Jukebox::Jukebox() {
  songs = NULL;
  song_count = 0;
}

void Jukebox::add_song(Song& song) {
  Song** temp = new Song*[song_count + 1];
  if (songs != NULL) {
    for (int i = 0; i < song_count; ++i) {
      temp[i] = songs[i];
    }
  }
  temp[song_count] = &song;
  delete[] songs;
  songs = temp;
  ++song_count;

}

void Jukebox::add_rating_by_title_and_artist(std::string title, std::string artist, float new_rating) {
  for (int i = 0; i < song_count; ++i) {
    if (title == songs[i]->Song::get_title() && artist == songs[i]->Song::get_artist()) {
      songs[i]->Song::add_rating(new_rating);
    }
  }
}

float Jukebox::get_average_rating_by_artist(std::string artist) {
  float rating = 0;
  int song_of_artist = 0;
  for (int i = 0; i < song_count; ++i) {
    if (artist == songs[i]->Song::get_artist()) {
      rating += songs[i]->Song::get_average_rating();
      ++song_of_artist;
    }
  }
  return rating / song_of_artist;
}

float Jukebox::get_average_rating_by_genre(std::string genre) {
  float rating = 0;
  int song_of_genre = 0;
  for (int i = 0; i < song_count; ++i) {
    if (genre == songs[i]->Song::get_genre()) {
      rating += songs[i]->Song::get_average_rating();
      ++song_of_genre;
    }
  }
  return rating / song_of_genre;
}

std::string Jukebox::get_top_rated_title() {
  float temp = 0;
  std::string top_rated = "";
  for (int i = 0; i < song_count; ++i) {
    if (songs[i]->Song::get_average_rating() > temp) {
      temp = songs[i]->Song::get_average_rating();
      top_rated = songs[i]->Song::get_title();
    }
  }
  return top_rated;
}

Jukebox::~Jukebox() {
  delete songs;
}
