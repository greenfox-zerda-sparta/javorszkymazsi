#include "Input.h"

Input::Input() {
  SDL_PumpEvents();
  x = 0;
  y = 0;
  for(int i = 0; i < 3; i++) {
    mouseArray[i] = false;
  }
}

void Input::get_button_states(){
  // 1 = Left 2 = Center 3 = Right
  SDL_PollEvent(&event);
  if(event.type == SDL_MOUSEBUTTONDOWN)
    mouseArray[event.button.button - 1] = true;
  if(event.type == SDL_MOUSEBUTTONUP)
    mouseArray[event.button.button - 1] = false;
}

void Input::update() {
  SDL_PumpEvents();
  //Gets mouse location
  SDL_GetMouseState(&x, &y);
  //Gets mouse button states
  get_button_states();
}

bool Input::get_mouse_button(int index) {
  if(index <= 3 && index >= 1)
    return mouseArray[index-1];
  return false;
}

SDL_Event Input::get_event() {
  return event;
}

int Input::get_x() {
  return x;
}

int Input::get_y() {
  return y;
}
