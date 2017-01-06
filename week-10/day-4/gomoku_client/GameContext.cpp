#include "GameContext.h"

GameContext::GameContext(unsigned int screen_width, unsigned int screen_height) {
  SDL_Init(SDL_INIT_VIDEO);
  screen = SDL_CreateWindow("Gomoku Client - Tyúk",
                            SDL_WINDOWPOS_UNDEFINED,
                            SDL_WINDOWPOS_UNDEFINED,
                            screen_width, screen_height,
                            0);
  renderer = SDL_CreateRenderer(screen, -1, 0);
}

GameContext::~GameContext() {
  for (std::map<std::string, SDL_Texture*>::iterator it = sprites.begin(); it != sprites.end(); ++it) {
    SDL_DestroyTexture(it->second);
  }
  SDL_Quit();
}

void GameContext::load_file(std::string name) {
  SDL_Surface* result = SDL_LoadBMP(name.c_str());
  SDL_SetColorKey(result, SDL_TRUE, SDL_MapRGB(SDL_AllocFormat(SDL_GetWindowPixelFormat(screen)), 0xFF, 0, 0xFF));
  sprites[name] = SDL_CreateTextureFromSurface(renderer, result);
  SDL_FreeSurface(result);
}

void GameContext::draw_sprite(std::string name, int x, int y) {
  SDL_Rect temp;
  temp.x = x;
  temp.y = y;
  temp.w = WIDTH;
  temp.h = HEIGHT;
  SDL_RenderCopy(renderer, sprites[name], NULL, &temp);
}

void GameContext::render() {
  SDL_RenderPresent(renderer);
}
