#ifndef GAME_ENGINE_H
#define GAME_ENGINE_H

#include <map>
#include <string>
#include "SDL.h"

const int WIDTH = 35;
const int HEIGHT = 35;

class GameContext {
private:
  SDL_Window* screen;
  SDL_Renderer* renderer;
  std::map<std::string, SDL_Texture*> sprites;
  bool keys[5];
public:
  GameContext(unsigned int screen_width, unsigned int screen_height) {
    SDL_Init(SDL_INIT_VIDEO);
    screen = SDL_CreateWindow("Gomoku Game",
                              SDL_WINDOWPOS_UNDEFINED,
                              SDL_WINDOWPOS_UNDEFINED,
                              screen_width, screen_height,
                              0);
    renderer = SDL_CreateRenderer(screen, -1, 0);
    reset_keys();
  }
  ~GameContext() {
    for (std::map<std::string, SDL_Texture*>::iterator it = sprites.begin(); it != sprites.end(); ++it) {
      SDL_DestroyTexture(it->second);
    }
    SDL_Quit();
  }
  void load_file(std::string name) {
    SDL_Surface* result = SDL_LoadBMP(name.c_str());
    SDL_SetColorKey(result, SDL_TRUE, SDL_MapRGB(SDL_AllocFormat(SDL_GetWindowPixelFormat(screen)), 0xFF, 0, 0xFF));
    sprites[name] = SDL_CreateTextureFromSurface(renderer, result);
    SDL_FreeSurface(result);
  }
  void draw_sprite(std::string name, int x, int y) {
    SDL_Rect temp;
    temp.x = x;
    temp.y = y;
    temp.w = WIDTH;
    temp.h = HEIGHT;
    SDL_RenderCopy(renderer, sprites[name], NULL, &temp);
  }
  void render() {
    SDL_RenderPresent(renderer);
  }
  void reset_keys() {
    for (unsigned int i = 0; i < 5; ++i) {
      keys[i] = false;
    }
  }
  void on_key_down(unsigned int key_code) {
    keys[key_code] = true;
  }
  bool was_key_pressed(unsigned int key_code) {
    return keys[key_code];
  }
};

class Game {
public:
  virtual void init(GameContext& context) = 0;
  virtual void render(GameContext& context) = 0;
  virtual bool is_field_empty(int i, int j) = 0;
  virtual void set_player_choice(int, int, int) = 0;
  virtual void create_board(GameContext&) = 0;
};

class GameEngine {
private:
  GameContext* context;
  Game* game;
  int click_counter;
  int x;
  int y;
public:
  GameEngine(Game* g, unsigned int screen_width, unsigned int screen_height) {
    context = new GameContext(screen_width, screen_height);
    game = g;
    game->init(*context);
  }

  ~GameEngine() {
    delete context;
  }

  int get_board_position(int x, int y) {
    if (game->is_field_empty(x, y)) {
      click_counter++;
      return click_counter % 2 == 0 ? 2 : 1;
    }
    return -1;
  }

  void run() {
    SDL_Event event;
    int gameover = 0;
    while (!gameover) {
      context->reset_keys();
      if (SDL_PollEvent(&event)) {
        switch (event.type) {
          case SDL_QUIT:
            gameover = 1;
            break;
          case SDL_MOUSEBUTTONDOWN:
            if (event.button.button == SDL_BUTTON_LEFT) {
              SDL_GetMouseState(&x, &y);
              int key = get_board_position(x / WIDTH, y / HEIGHT);
              game->set_player_choice(x / WIDTH, y / HEIGHT, key);
              game->create_board(*context);
          break;
        }
      }
      game->render(*context);
      }
    }
  }
};
#endif
