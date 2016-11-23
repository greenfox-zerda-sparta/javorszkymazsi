#include <iostream>
#include <string>

using namespace std;

template<class T, class G>
void compare_data_types(T a, G b) {
  if (sizeof(a) > sizeof(b)) {
    cout << a << " is stored in more bytes than " << b << "." << endl;
  } else if (sizeof(a) == sizeof(b)) {
    cout << "These types are the exact same size." << endl;
  } else {
    cout << b << " is stored in more bytes than " << a << "." << endl;
  }
}

int main() {
  long int a = 4;
  float b = 3.45;
  compare_data_types(a, b);
  //Create a function template that takes 2 different typenames, and prints out
  //which one is stored in more bytes from then

  return 0;
}
