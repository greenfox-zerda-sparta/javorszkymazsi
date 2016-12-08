#include "MyGame.h"


//#include "GameBoard.h"

int main(int argc, char* argv[]) {
  MyGame game;
  GameEngine engine(&game, 720, 720);
  engine.run();
  /*GameBoard game_board;
  std::vector<std::string> map = game_board.load_map();
  for (unsigned int i = 0; i < 10; ++i) {
    for (unsigned int j = 0; j < 10; ++j) {
      std::cout << map[i][j];
    }
    std::cout << std::endl;
  }*/
  return 0;
}
