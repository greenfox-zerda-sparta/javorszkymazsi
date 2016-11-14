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

Jukebox::~Jukebox() {
  delete songs;
}
