#ifndef GAMEENGINE_H_
#define GAMEENGINE_H_

#include "SDL.h"
#include "Gomoku.h"

class GameEngine {
private:
  GameContext* context;
  Gomoku* game;
  TCPsocket client;
  TCPsocket server;
  SDLNet_SocketSet set;
  int click_counter;
  int x;
  int y;
public:
  GameEngine(Gomoku*, unsigned int, unsigned int);
  ~GameEngine();
  int get_player(int, int);
  void run();
};

#endif
