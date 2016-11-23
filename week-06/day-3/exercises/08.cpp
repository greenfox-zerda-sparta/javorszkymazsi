#include <iostream>
#include <string>

using namespace std;

template<class Num>
class Calculator {
public:
  Num add(Num a, Num b) {
    return a + b;
  }
  Num subtract(Num a, Num b) {
    return a - b;
  }
  Num multiply(Num a, Num b) {
    return a * b;
  }
  Num divide(Num a, Num b) throw(int) {
    if (b == 0 || b == 0.0) {
      throw 0;
    }
    return a / b;
  }
};

template<>
class Calculator<char> {
public:
  int add(char a, char b) {
    cout << "chars will be interpreted as integers. It will be calculated based on their order in the alphabet." << endl;
    int sum = a - 64 + b - 64;
    return sum;
  }
  int subtract(char a, char b) {
    cout << "chars will be interpreted as integers. It will be calculated based on their order in the alphabet." << endl;
    int sum = a - 64 - b - 64;
    return sum;
  }
  int multiply(char a, char b) {
    cout << "chars will be interpreted as integers. It will be calculated based on their order in the alphabet." << endl;
    int sum = (a - 64) * (b - 64);
    return sum;
  }
  int divide(char a, char b) {
    cout << "chars will be interpreted as integers. It will be calculated based on their order in the alphabet." << endl;
    int sum = (a - 64) / (b - 64);
    return sum;
  }
};

template<>
class Calculator<string> {
public:
  string add(string a, string b) throw(const char*) {
    throw "You cannot add strings together in a calculator.";
  }
  string subtract(string a, string b) throw(const char*) {
    throw "You cannot subtract strings from each other in a calculator.";
  }
  string multiply(string a, string b) throw(const char*) {
    throw "You cannot multiply strings in a calculator.";
  }
  string divide(string a, string b) throw(const char*) {
    throw "You cannot divide strings in a calculator.";
  }
};

int main() {
  try {
    Calculator <int> calc4;
    calc4.divide(3, 0);
  } catch (int ex) {
    cout << "You cannot divide by zero." << endl;
  }

  Calculator <int> calc;
  cout << calc.add(3, 4) << endl;
  cout << calc.subtract(6, 4) << endl;
  cout << calc.divide(8, 2) << endl;
  cout << calc.multiply(8, 9) << endl;

  Calculator <char> calc2;
  cout << calc2.add('T', 'B') << endl;
  cout << calc2.subtract('T', 'B') << endl;
  cout << calc2.divide('T', 'B') << endl;
  cout << calc2.multiply('T', 'B') << endl;


  try {
    Calculator <string> calc3;
    calc3.subtract("das", "sdfsrg");
  } catch (const char* ex) {
    cout << ex << endl;
  }
  //Create a class template for a calculator
  //it should have all the basic methods: add, subtract, multiply, divide
  //use exceptions to handle errors in special cases! (find the special cases!)
  return 0;
}
