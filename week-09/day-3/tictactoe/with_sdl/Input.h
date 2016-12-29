#ifndef INPUT_H_
#define INPUT_H_
#include "SDL.h"

class Input {
private:
  bool mouseArray[3];
  int x, y;
  SDL_Event event;
  void get_button_states();
public:
  Input();
  void update();
  bool get_mouse_button(int index);
  SDL_Event get_event();
  int get_x();
  int get_y();
};

#endif
