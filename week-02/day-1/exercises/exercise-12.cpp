#include <iostream>
#include <string>

using namespace std;

int main() {
	string m = "Apple ";
	//fill the m variable with its cotnent 4 times

	for (int i = 0; i < 4 ; i++){
		cout << m << endl;
		m = m + "Apple ";
	}

	return 0;
}
