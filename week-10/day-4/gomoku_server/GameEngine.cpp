#include "GameEngine.h"

GameEngine::GameEngine(Gomoku* g, unsigned int screen_width, unsigned int screen_height) {
  SDLNet_Init();
  IPaddress ip;
  set = SDLNet_AllocSocketSet(2);
  SDLNet_ResolveHost(&ip, NULL, 1234);
  server = SDLNet_TCP_Open(&ip);
  SDLNet_TCP_AddSocket(set, server);
  while (1) {
    client = SDLNet_TCP_Accept(server);
    if (client) {
      SDLNet_TCP_AddSocket(set, client);
      break;
    }
  }
  context = new GameContext(screen_width, screen_height);
  game = g;
  game->init(*context);
  can_step = true;
  this->x = 0;
  this->y = 0;
}

GameEngine::~GameEngine() {
  SDLNet_FreeSocketSet(set);
  SDLNet_TCP_Close(server);
  delete game;
  delete context;
}

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
        if (player2_coordinates[0] == 42 && player2_coordinates[1] == 42) {
          game->render(*context);
          SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_INFORMATION,
                                   "End of game",
                                   "The other player won! :(( If you'd like to play another game press OK",
                                   NULL);
          game->initialize_board();
        } else {
          game->set_player2_choice(player2_coordinates[0], player2_coordinates[1]);
          game->create_board(*context);
          can_step = true;
        }
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
            if (can_step) {
              SDL_GetMouseState(&x, &y);
              game->set_player1_choice(x / WIDTH, y / HEIGHT);
              game->create_board(*context);
              int player1_coordinates[2] = {x / WIDTH, y / HEIGHT};
              SDLNet_TCP_Send(client, player1_coordinates, 100);
              if (game->is_game_over(x / WIDTH, y / HEIGHT)) {
                player1_coordinates[0] = 42;
                player1_coordinates[1] = 42;
                SDLNet_TCP_Send(client, player1_coordinates, 100);
                game->render(*context);
                SDL_ShowSimpleMessageBox(SDL_MESSAGEBOX_INFORMATION,
                                         "End of game",
                                         "You won! If you'd like to play another game press OK",
                                         NULL);
                game->initialize_board();
              }
              can_step = false;
            }
          }
        }
      game->render(*context);
    }
  }
}
