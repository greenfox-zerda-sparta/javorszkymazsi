#include "Gomoku.h"
#include "GameEngine.h"

int main(int argc, char* argv[]) {

    Gomoku gomoku;
    GameEngine engine(&gomoku, 760, 760);
    engine.run();

  return 0;
}
