/*

#include <iostream>
#include <string>

using namespace std;

int main() {
	int a[] = {4, 5, 6, 7};
	// get the 3rd element of a
	cout << a[2] << endl;
	return 0;
}




#include <iostream>
#include <string>

using namespace std;

int main() {
	int b[] = {54, 23, 66, 12};
	// add the second the third

	cout << b[1]+b[2] << endl;
	return 0;
}



#include <iostream>
#include <string>

using namespace std;

int main() {
	// print all the elements of the array
	int x = 6;
	int d[x] = {6, 5, 4, 3, 2, 1};
	for ( int i = 0 ; i < x ; i++) {
		cout << d[i] << endl;
	}

  return 0;
}




#include <iostream>
#include <string>

using namespace std;

int main() {
	int x = 6;
	int d[x] = {1, 2, 3, 8, 5, 6};
	// change 8 to 4, than print all the elements of the array
	d[3] = 4;
	for ( int i = 0 ; i < x ; i++) {
		cout << d[i] << endl;
	}

	return 0;
}


#include <iostream>
#include <string>

using namespace std;

int main() {
	int x = 5;
	int e[x] = {1, 2, 3, 4, 5};
	// increment the 3rd element, than print all the elements of the array
	e[2] += 4;
	for ( int i = 0 ; i < x ; i++) {
			cout << e[i] << endl;
		}

	return 0;
}



#include <iostream>
#include <string>

using namespace std;

int main() {
	int x = 5;
	int f[x] = {3, 4, 5, 6, 7};
	// Please double all the elements, than print all of them
	for ( int i = 0 ; i < x ; i++) {
				f[i] *= 2;
				cout << f[i] << endl;
	}
	return 0;
}



#include <iostream>
#include <string>

using namespace std;

int main() {
  char g1 = 'a';
  double g2 = 12.345;
  // Tell if g1 is stored in more bytes than g2

  if ( sizeof(g1) > sizeof(g2) ) {
	  cout << "The variable g1 is stored in more bytes than g2 which is amazing." << endl;
  } else {
	  cout << "The variable g1 is NOT stored in more bytes than g2 which is also amazing." << endl;
  }
  return 0;
}


#include <iostream>
#include <string>

using namespace std;

int main() {
  int x = 5;
  int h[x] = {3, 4, 5, 6, 7};
  int i, result = 0;
	// print the sum of all numbers in h
  for ( i = 0 ; i < x ; i++ ) {
	  result += h[i];
  }
  cout << "The awesome sum of these even more beautiful numbers is " << result << " . How amazing is that?" << endl;

  return 0;
}



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


#include <iostream>
#include <string>

using namespace std;

int min(int numbers[], int length) {
  int smallest = numbers[0];
  for (int i = 1; i < length; i++) {
    if (numbers[i] < smallest) {
      smallest = numbers[i];
    }
  }
  return smallest;
}

int main() {
  int numbers[]= {7, 5, 8, -1, 2};
  cout << min(numbers, 5) << endl ;
  return 0;

  // Write a function that takes an array and its length returns the minimal element
  // in the array (your own min function)
}



#include <iostream>
#include <string>

using namespace std;

int serial(int numbers[], int length, int a) {
  for (int i = 0; i < length; i++) {
    if (numbers[i] = a) {
      cout << i << endl;
      break;
      // return -1;
    } else {
      cout << "-1" << endl;
      // return index;
    }
  }
  return 0;
}

int main() {
  int numbers[] = {7, 5, 8, -1, 2};
  // Write a function that takes an array, its length and a number
  // and it returns the index of the given number in the array.
  // It should return -1 if did not find it. (linear search)
  serial(numbers, 5, 5);
  return 0;
}



#include <iostream>
#include <string>

using namespace std;

int main() {
  int f[] = {3, 4, 5, 6, 7};

  for (int i = 0; i <= 4 ; i++)
    f[i] *= 2;

  cout << "The elements of 'f' are:";

  for (int i = 0; i < sizeof(f)/sizeof(int) ; i++) {
    cout << " " << f[i];
  }
  return 0;
}


#include <iostream>
#include <string>

using namespace std;

int main() {
  int fish = 5;
  int* fishPointer = &fish;
  cout << fishPointer << endl;


}



#include <iostream>
#include <string>

using namespace std;

int main() {
  int bucky[5];
  int *bp0 = &bucky[0];
  int *bp1 = &bucky[1];
  int *bp2 = &bucky[2];

  cout << bp0 << endl << bp1 << endl << bp2 << endl ;
  bp0 += 3;
  cout << bp0;

  return 0;
}




#include <iostream>

using namespace std;

int main() {
  int high_number = 6655;
  int low_number = 2;

  int *hight_number_pointer = &low_number;
  int *low_number_pointer = &high_number;
  // Please fix the problem and swap where the pointers point,
  // without using the "&" operator.
  int temp = *hight_number_pointer;
  *hight_number_pointer = *low_number_pointer;
  *low_number_pointer = temp;
  cout << "High number pointer points to the value of " << &low_number << endl;
  cout << "Low number pointer points to the value of " << &*hight_number_pointer  << endl;
  return 0;
}
*/


#include <iostream>

using namespace std;

bool searchForNegative(int *array, int length);

int main() {
  int numbers[7] = {6, 5, -3, 4, -1, 8, 7};

  // Write a function that decides if an array includes at least one negative number or not
  if (searchForNegative(numbers, 7) == true) {
    cout << "True";
  }
  return 0;
}

bool searchForNegative(int *array, int length) {
  for (int i = 0; i < length; i++) {
    if (array[i] < 0)
      return true;
  }
  return false;
}
