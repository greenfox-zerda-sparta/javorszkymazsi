#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
  vector<char> v;
  v.reserve(8);
  string greenfox = "GREENFOX";
  char c;
  cout << "I want you to enter the letters to GREENFOX one by one." << endl;
  for (unsigned int i = 0; i < v.capacity(); ++i) {
    cout << "Please provide a character." << endl;
    cin >> c;
    v.push_back(c);
    if (v.at(i) != greenfox[i]) {
      cout << "You\'ve entered an incorrect character. Continue with the next one." << endl;
    }
  }
  try {
    for (unsigned int i = 0; i < v.size(); ++i) {
      if (v.at(i) != greenfox[i]) {
        throw "You entered something different from GREENFOX, sorry.";
      }
    }
  } catch (const char* ex) {
    cout << ex << " You have entered this: ";
  }
  for (unsigned int i = 0; i < v.size(); ++i) {
    cout << v.at(i);
  }

  //create a vector of characters with the size of 8
  //ask the user to fill this vector with characters one by one
  //at the end make sure the vector holds the letters of "GREENFOX"
  //so correct the user if he/she gives a different letter from the one we want them to give :)

  return 0;
}
