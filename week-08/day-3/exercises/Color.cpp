#include "Color.h"

Color::Color() {
  this->red = 0;
  this->green = 0;
  this->blue = 0;
}

Color::Color(unsigned char red, unsigned char green, unsigned char blue) {
  this->red = red;
  this->green = green;
  this->blue = blue;
}

Color::Color(const Color& other_color) {
  this->red = other_color.red;
  this->green = other_color.green;
  this->blue = other_color.blue;
}

void Color::darken(float amount) throw (const char*) {
  if (amount < 0 || amount > 1) {
    throw "Invalid number as a parameter. Choose between 0 and 1.";
  }
  this->red = red - red * amount;
  this->green = green - green * amount;
  this->blue = blue - blue * amount;
}

void Color::lighten(float amount) throw (const char*) {
  if (amount < 0 || amount > 1) {
    throw "Invalid number as a parameter. Choose between 0 and 1.";
  }
  this->red = red + (255 - red) * amount;
  this->green = green + (255 - green) * amount;
  this->blue = blue + (255 - blue) * amount;
}

/*Color::Color(std::string hex_number) throw (const char*) {
  if (hex_number.size() != 6) {
    throw "Invalid hexadecimal number.";
  }
  std::vector<unsigned char> dec_numbers;
  std::stringstream ss;
  unsigned char dec_num;
  for (unsigned int i = 0; i < hex_number.size(); ++i) {
    ss << hex_number[i];
    ss >> std::hex >> dec_num;
    dec_numbers.push_back(dec_num);
  }
  this->red = dec_numbers[0] * 16 + dec_numbers[1];
  this->green = dec_numbers[2] * 16 + dec_numbers[3];
  this->blue = dec_numbers[4] * 16 + dec_numbers[5];
}*/

Color Color::blend(const Color& other) {
  Color temp;
  temp.red = (other.red + red) / 2;
  temp.green = (other.green + green) / 2;
  temp.blue = (other.blue + blue) / 2;
  return temp;
}

void Color::set_red(unsigned char amount) {
  this->red = amount;
}

void Color::set_green(unsigned char amount) {
  this->green = amount;
}

void Color::set_blue(unsigned char amount) {
  this->blue = amount;
}

unsigned char Color::get_red() {
  return red;
}

unsigned char Color::get_green() {
  return green;
}

unsigned char Color::get_blue() {
  return blue;
}

Color::~Color() {

}

