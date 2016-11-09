#include <iostream>
#include <string>

#ifndef SHAPE_H_
#define SHAPE_H_

using namespace std;

class Shape {
  public:
    Shape();
    virtual string* get_name();
    virtual double get_area();
    virtual ~Shape();
  protected:
    double area;
};

#endif /* SHAPE_H_ */
