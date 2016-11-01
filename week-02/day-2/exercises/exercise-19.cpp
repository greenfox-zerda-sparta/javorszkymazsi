#include <iostream>
using namespace std;

bool prime_number(int num) {
  for (int i = 2; i < num / 2; i++) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int main(){
  int number = 73;
  // create a function that decides if a number is a prime number.
  // It should take a number as an argument and return true if it is prime and
  // false otherwise.

  if (prime_number(number) == 0) {
    cout << number << " is not a prime number." << endl;
  } else if (prime_number(number) == 1) {
    cout << number << " is a prime number. Yaaaay!" << endl;
  }
  return 0;
}
