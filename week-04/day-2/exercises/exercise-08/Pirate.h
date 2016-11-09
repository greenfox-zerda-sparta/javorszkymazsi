#include <string>
#ifndef PIRATE_H_
#define PIRATE_H_

using namespace std;

class Pirate {
  private:
    string name;
    int bottle;
  public:
    Pirate(string name);
    int drink_rum();

    string hows_goin_mate();
};

#endif /* PIRATE_H_ */
