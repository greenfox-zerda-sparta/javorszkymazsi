#include <string>
#include <SDL.h>
#include <SDL_net.h>
#include <iostream>

int main(int argc, char *argv[]) {
  SDL_Init(SDL_INIT_EVERYTHING);
  SDLNet_Init();

  IPaddress ip;
  SDLNet_ResolveHost(&ip, NULL, 1234);
  TCPsocket server = SDLNet_TCP_Open(&ip); //listening
  TCPsocket client;

  const char* text = "You are connected. Enter 'q' for finish";
  std::cout << "You are connected. Enter 'q' for finish" << std::endl;
  while (1) {
    client = SDLNet_TCP_Accept(server);
    if (client) {

      SDLNet_TCP_Send(client, text, 100);
      char client_text[100];

      while(client_text[0] != 'q'){
        SDLNet_TCP_Recv(client, client_text, 100);
        std::cout << "Client: " << std::endl;
        std::cout << client_text << std::endl;
        std::cout << std::endl;
        std::string buffer;
        std::cout << "Server: " << std::endl;
        getline(std::cin, buffer);
        std::cout << std::endl;
        text = buffer.c_str();
        SDLNet_TCP_Send(client, text, 100);
      }

      SDLNet_TCP_Close(client);
      break;
    }
  }
  SDL_Quit();
  return 0;
}
