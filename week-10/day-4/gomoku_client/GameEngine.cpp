#include "GameEngine.h"

GameEngine::GameEngine(Gomoku* g, unsigned int screen_width, unsigned int screen_height) {
  //SDL_Init(SDL_INIT_EVERYTHING);
  SDLNet_Init();
  IPaddress ip;
  set = SDLNet_AllocSocketSet(2);
  SDLNet_ResolveHost(&ip, "127.0.0.1", 1234);
  client = SDLNet_TCP_Open(&ip);
  SDLNet_TCP_AddSocket(set, client);
  //char text[100] = "";
  //SDLNet_TCP_Recv(client, text, 100);
  //std::cout << text << std::endl;
  context = new GameContext(screen_width, screen_height);
  game = g;
  game->init(*context);
  this->click_counter = 0;
  this->x = 0;
  this->y = 0;
}

GameEngine::~GameEngine() {
  SDLNet_TCP_Close(client);
  SDL_Delay(1000);
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
    int player1_coordinates[2];
    if (activeSockets != 0) {
       int gotMessage = SDLNet_SocketReady(server);
       if (gotMessage != 0) {
         SDLNet_TCP_Recv(client, player1_coordinates, 100);
         game->set_player1_choice(player1_coordinates[0], player1_coordinates[1]);
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
            game->create_board(*context);
            game->set_player2_choice(x / WIDTH, y / HEIGHT);
            game->create_board(*context);
            int player2_coordinates[2] = {x / WIDTH, y / HEIGHT};
            SDLNet_TCP_Send(client, player2_coordinates, 100);
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
