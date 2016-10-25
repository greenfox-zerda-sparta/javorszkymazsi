#include <iostream>
#include <string>

using namespace std;

void input (string x);

int main() {
	string k = "kuty";
	// write a function that gets a string as an input
	// and appends an 'a' character to its end
	input(k);
	return 0;
}

void input (string x) {
	x += "a";
	cout << x << endl;
}
