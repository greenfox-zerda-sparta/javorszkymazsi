#include <iostream>
#include <string>

using namespace std;

string get_element(int index) throw(int, const char*);

int main() {
  try {
    cout << get_element(4) << endl;
    cout << get_element(8) << endl;
  } catch (int ex) {
    cout << "Last element is under the index number five. The number you\'ve entered is larger with the value of " << ex << "." << endl;
  } catch (const char* ex) {
    cout << ex << endl;
  }
  try {
    cout << get_element(2) << endl;
    cout << get_element(-1) << endl;
  } catch (int ex) {
    cout << "Last element is under the index number five. The number you\'ve entered is larger with the value of " << ex << "." << endl;
  } catch (const char* ex) {
    cout << ex << endl;
  }
  return 0;
}

// Write a function that can throw two kinds of exceptions: int and const char*
// It should receive an integer.
// It should return a string from the char* array defined below.
// If the integer is larger than 5, throw an integer exception. The value of the exception should be how much larger it is.
// If the integer is less than 0, it should throw a const char* exception stating, that it is a negative number.
//
// Illustrate both cases in the main function.
// HINT: Put each protected code segmetn in a new try-catch block.

string get_element(int index) throw(int, const char*) {
  const char* sentence[6] = {"What", "a", "pleasant", "surprise", "this", "is."};
  if (index < 0) {
    throw "You\'ve entered a negative number. Why are you doing this to me?\n";
  } else if (index > 5) {
    throw index - 5;
  }
  return sentence[index];
}
