#include <iostream>
#include <string>

using namespace std;

void sum (int numbers[], int length);

int i, result = 0;

int main() {
	int length = 7;
	int numbers[length] = {4, 5, 6, 7, 8, 9, 10};
	sum(numbers, length);
	// write your own sum function
	// it should take an array and it's length
	return 0;
}

void sum (int numbers[], int length) {
	for ( i = 0 ; i < length ; i++) {
		result += numbers[i];
	}
	cout << result << endl;
}
