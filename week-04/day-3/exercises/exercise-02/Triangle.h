#ifndef TRIANGLE_H_
#define TRIANGLE_H_

class Triangle : public Shape {
  public:
    Triangle();
    virtual string* get_name();
    virtual ~Triangle();
};

#endif /* TRIANGLE_H_ */
