#include "MyGame.h"

int main(int argc, char* argv[]) {
  MyGame game;
  GameEngine engine(&game, 570, 570);
  engine.run();
  return 0;
}
