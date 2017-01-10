#include "InputHandler.h"

InputHandler::InputHandler() {
  // TODO Auto-generated constructor stub

}

void InputHandler::demand_input(std::string& word) {
  std::cin >> word;
}

bool InputHandler::is_y_pressed() {
  std::string wanna_quit;
  std::cin >> wanna_quit;
  return (wanna_quit == "y");
}

InputHandler::~InputHandler() {
  // TODO Auto-generated destructor stub
}

