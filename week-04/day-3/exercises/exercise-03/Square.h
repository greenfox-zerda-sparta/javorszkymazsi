#ifndef SQUARE_H_
#define SQUARE_H_

class Square : public Shape {
  public:
    Square(double side);
    string* get_name();
    double get_area();
    ~Square();
  private:
    double side;
};

#endif /* SQUARE_H_ */
