#ifndef SQUARE_H_
#define SQUARE_H_

class Square : public Shape{
public:
  Square();
  virtual string* get_name();
  virtual ~Square();
};

#endif /* SQUARE_H_ */
