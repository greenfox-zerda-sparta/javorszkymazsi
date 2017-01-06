#ifndef GAMECONTEXT_H_
#define GAMECONTEXT_H_

#include <map>
#include "SDL.h"

const int WIDTH = 35;
const int HEIGHT = 35;

class GameContext {
private:
  SDL_Window* screen;
  SDL_Renderer* renderer;
  std::map<std::string, SDL_Texture*> sprites;
public:
  GameContext(unsigned int, unsigned int);
  ~GameContext();
  void load_file(std::string);
  void draw_sprite(std::string, int, int);
  void render();
};

#endif
