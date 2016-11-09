#ifndef TRIANGLE_H_
#define TRIANGLE_H_

class Triangle : public Shape {
  public:
    Triangle(double width, double height);
    string* get_name();
    double get_area();
    ~Triangle();
  private:
    double width;
    double height;
};

#endif /* TRIANGLE_H_ */
