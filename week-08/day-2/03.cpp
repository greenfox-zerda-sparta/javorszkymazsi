#include <iostream>
#include <string>
#include <map>

using namespace std;

int main() {
  map<string, int> m;
  m["one"] = 1;
  m["two"] = 2;
  m["three"] = 3;
  m["four"] = 4;
  m["five"] = 5;

  for (map<string, int>::iterator it = m.begin(); it != m.end(); ++it) {
    cout << "Key of " << it->first << " has the value of " << it->second << "." << endl;
  }
  // Print all the keys and values of the map

  return 0;
}
