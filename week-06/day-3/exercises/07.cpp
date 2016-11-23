#include <iostream>
#include <string>

using namespace std;

template<class T, class U>
class Simple {
public:
  Simple() {
    this->a = T();
    this->b = U();
  }
  T get_a() {
    return a;
  }
  U get_b() {
    return b;
  }
  void set_a(T new_a) {
    this->a = new_a;
  }
  void set_b(U new_b) {
    this->b = new_b;
  }
private:
  T a;
  U b;
};

int main() {
  Simple <char, int> yo;
  yo.set_a('K');
  yo.set_b(2);
  cout << yo.get_a() << " " << yo.get_b() << endl;
  Simple <int, double> yo2;
  yo2.set_a(4);
  yo2.set_b(6.5);
  cout << yo2.get_a() << " " << yo2.get_b() << endl;
  Simple <string, int> yo3;
  yo3.set_a("Board");
  yo3.set_b(3);
  cout << yo3.get_a() << " " << yo3.get_b() << endl;
  //Create a simple class template which contains 2 item and has both a get and a set method for these!
  return 0;
}
