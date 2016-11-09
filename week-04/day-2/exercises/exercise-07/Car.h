#include <string>
#ifndef CAR_H_
#define CAR_H_

using namespace std;

class Car {
  private:
    string type;
    double km;
  public:
    Car(string type);
    double run(int number);
};

#endif /* CAR_H_ */
