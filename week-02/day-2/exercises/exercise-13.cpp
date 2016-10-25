#include <iostream>
#include <string>

using namespace std;

int factorial (int n);

int main() {
	// create a function that returns it's input factorial
	int fact = 5;
	cout << factorial(fact) << endl;
	return 0;
}

int factorial (int n) {

	if ( n == 1 ) {
		return 1;
	} else {
		return n * factorial(n-1);
	}
}
