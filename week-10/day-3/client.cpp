#include <iostream>
#include <string>
#include <SDL.h>
#include <SDL_net.h>

int main(int argc, char *argv[]) {
  SDL_Init(SDL_INIT_EVERYTHING);
  SDLNet_Init();
  IPaddress ip;
  SDLNet_ResolveHost(&ip, "127.0.0.1", 1234);
  TCPsocket client = SDLNet_TCP_Open(&ip);
  char text[100] = "";
  const char* client_text = "";
  while (client_text[0] != 'q') {
    SDLNet_TCP_Recv(client, text, 100);
    std::cout << "Server: " << std::endl;
    std::cout << text << std::endl;
    std::cout << std::endl;
    std::string input;
    std::cout << "Client: " << std::endl;
    getline(std::cin, input);
    std::cout << std::endl;
    client_text = input.c_str();
    SDLNet_TCP_Send(client, client_text, 100);
  }

  SDLNet_TCP_Close(client);
  SDL_Quit();
  return 0;
}
