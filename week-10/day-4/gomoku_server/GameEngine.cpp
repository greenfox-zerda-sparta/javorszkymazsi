#include "GameEngine.h"

GameEngine::GameEngine(Gomoku* g, unsigned int screen_width, unsigned int screen_height) {
  //SDL_Init(SDL_INIT_EVERYTHING);
  SDLNet_Init();

  IPaddress ip;
  set = SDLNet_AllocSocketSet(2);
  SDLNet_ResolveHost(&ip, NULL, 1234);
  server = SDLNet_TCP_Open(&ip); //listening
  SDLNet_TCP_AddSocket(set, server);
  //int coordinates[2] = {10, 10};
  while (1) {
    client = SDLNet_TCP_Accept(server);
    if (client) {
      SDLNet_TCP_AddSocket(set, client);
      //SDLNet_TCP_Send(client, coordinates, 100);

      break;
    }
  }

  context = new GameContext(screen_width, screen_height);
  game = g;
  game->init(*context);
  this->click_counter = 0;
  this->x = 0;
  this->y = 0;
}

GameEngine::~GameEngine() {
  SDLNet_TCP_Close(server);
  delete context;
}

/*int GameEngine::get_player(int x, int y) {
  if (game->is_field_empty(x, y)) {
    click_counter++;
    return click_counter % 2 == 0 ? 2 : 1;
  }
  return -1;
}*/

void GameEngine::run() {
  SDL_Event event;
  int gameover = 0;
  while (!gameover) {
    int activeSockets = SDLNet_CheckSockets(set, 5);
    int player2_coordinates[2];
    if (activeSockets != 0) {
       int gotMessage = SDLNet_SocketReady(client);
       if (gotMessage != 0) {
         SDLNet_TCP_Recv(client, &player2_coordinates, 100);
         game->set_player2_choice(player2_coordinates[0], player2_coordinates[1]);
         game->create_board(*context);
      }
    }
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
            game->set_player1_choice(x / WIDTH, y / HEIGHT);
            game->create_board(*context);
            int player1_coordinates[2] = {x / WIDTH, y / HEIGHT};
            SDLNet_TCP_Send(client, player1_coordinates, 100);
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
