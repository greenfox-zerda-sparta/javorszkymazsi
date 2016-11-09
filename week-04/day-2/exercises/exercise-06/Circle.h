#include <string>
#ifndef CIRCLE_H_
#define CIRCLE_H_

using namespace std;

class Circle {
  private:
    double radius;
  public:
    Circle(double radius);
    double get_circumference();
    double get_area();
};

#endif /* CIRCLE_H_ */
