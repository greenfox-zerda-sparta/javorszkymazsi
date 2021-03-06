#include "Color.h"

int main() {
  try {
    Color c1(200, 25, 0);
    std::cout << (int)c1.get_red() << std::endl;
    std::cout << (int)c1.get_green() << std::endl;
    std::cout << (int)c1.get_blue() << std::endl;
    Color c2(100, 10, 10);
    Color c3(c1.blend(c2));
    std::cout << (int)c3.get_red() << std::endl;
    std::cout << (int)c3.get_green() << std::endl;
    std::cout << (int)c3.get_blue() << std::endl;
    c3.darken(0.2);
    std::cout << (int)c3.get_red() << std::endl;
    std::cout << (int)c3.get_green() << std::endl;
    std::cout << (int)c3.get_blue() << std::endl;
    c3.lighten(.8);
    std::cout << (int)c3.get_red() << std::endl;
    std::cout << (int)c3.get_green() << std::endl;
    std::cout << (int)c3.get_blue() << std::endl;
    c3.darken(3);
  } catch (const char* ex) {
    std::cout << ex;
  }

  return 0;
}
