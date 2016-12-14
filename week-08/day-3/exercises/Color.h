#ifndef COLOR_H_
#define COLOR_H_
#include <iostream>
#include <vector>
#include <sstream>

class Color {
public:
  Color();
  Color(unsigned char red, unsigned char green, unsigned char blue);
  Color(const Color& other_color);
  //Color(std::string hex_number) throw (const char*);
  Color blend(const Color& other);
  void darken(float amount) throw (const char*);
  void lighten(float amount) throw (const char*);
  void set_red(unsigned char amount);
  void set_green(unsigned char amount);
  void set_blue(unsigned char amount);
  unsigned char get_red();
  unsigned char get_green();
  unsigned char get_blue();
  virtual ~Color();
private:
  unsigned char red;
  unsigned char green;
  unsigned char blue;
};

#endif /* COLOR_H_ */
