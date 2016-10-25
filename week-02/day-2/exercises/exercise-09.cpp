#include <iostream>
#include <string>

using namespace std;

string i = "Józsi";
void greet();

int main() {

	// create a function that takes a string argument and greets it.
	greet();

	return 0;
}

void greet() {
	cout << "Hello, " << i << "!" << endl;
}
