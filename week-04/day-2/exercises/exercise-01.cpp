#include <iostream>
#include <string>

using namespace std;

class Student {
  public:
    string name;
    unsigned int age;
};

int main() {
	Student John;
	John.name = "John";
	John.age = 21;
  // Create a new instance of the Student class and set it's name to "John" and
  // it's age to 21
	cout << "My student\'s name is " << John.name << ". And this person is " << John.age << " years old.";
  return 0;
}
