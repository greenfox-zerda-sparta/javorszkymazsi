#include "GameEngine.h"

GameEngine::GameEngine(Gomoku* g, unsigned int screen_width, unsigned int screen_height) {
  context = new GameContext(screen_width, screen_height);
  game = g;
  game->init(*context);
  this->click_counter = 0;
  this->x = 0;
  this->y = 0;
}

GameEngine::~GameEngine() {
  delete context;
}

int GameEngine::get_player(int x, int y) {
  if (game->is_field_empty(x, y)) {
    click_counter++;
    return click_counter % 2 == 0 ? 2 : 1;
  }
  return -1;
}

void GameEngine::run() {
  SDL_Event event;
  int gameover = 0;
  while (!gameover) {
    if (SDL_PollEvent(&event)) {
      switch (event.type) {
        case SDL_QUIT:
          gameover = 1;
          break;
        case SDL_KEYDOWN:
          switch (event.key.keysym.sym) {
            case SDLK_ESCAPE:
            case SDLK_q:
              gameover = 1;
              break;
          }
          break;
        case SDL_MOUSEBUTTONDOWN:
          if (event.button.button == SDL_BUTTON_LEFT) {
            SDL_GetMouseState(&x, &y);
            int player = get_player(x / WIDTH, y / HEIGHT);
            game->set_player_choice(x / WIDTH, y / HEIGHT, player);
            game->create_board(*context);
            if (game->is_game_over(x / WIDTH, y / HEIGHT)) {
              game->render(*context);
              SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_INFORMATION,
                                       "End of game",
                                       "You won! If you'd like to play another game press OK",
                                       NULL);
              game->initialize_board();
            }
          }
      }
      game->render(*context);
    }
  }
}
