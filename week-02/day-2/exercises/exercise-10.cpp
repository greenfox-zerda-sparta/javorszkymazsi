#include <iostream>
#include <string>

using namespace std;

void doub (int x);

int main() {
	int j = 123;
	// create a function that doubles it's input
	// double j with it
	doub(j);
	return 0;
}

void doub (int x) {
	x *= 2;
  cout << x << endl;
}
