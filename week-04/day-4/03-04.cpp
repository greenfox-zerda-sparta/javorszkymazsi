#include <iostream>
#include <string>
using namespace std;

// Create a class called ParentClass. It should have two public functions. Both return a string. One virtual, the other not.
// Each should return a unique string.
// Create a ChildClass which inherits from the ParentClass publicly.
// This should override both functions. The virtual and the nonvirtual one both.
// These should return unique string again.
//
// Create a main() function. In this function, create a ParentClass* pointer and instanciate a ChildClass member for that pointer.
// Hint: This should look something like this: ParentClass* a = new ChildClass();
// Print out the result of both functions on this a pointer.
// Print out the result of both functions if You first cast pointer a to be interpreted as of type ChildClass*
//

class ParentClass {
  public:
    ParentClass();
    virtual string get_virtual_string();
    string get_non_virtual_string();
    ~ParentClass();
};

ParentClass::ParentClass() {

}

string ParentClass::get_virtual_string() {
  return string("Virtual string.");
}

string ParentClass::get_non_virtual_string() {
  return string("Non-virtual string.");
}

ParentClass::~ParentClass() {

}


class ChildClass : public ParentClass {
  public:
    ChildClass();
    string get_virtual_string();
    string overwrite_non_virtual_string();
    ~ChildClass();
};

ChildClass::ChildClass() {

}

string ChildClass::get_virtual_string() {
  return string ("Overwritten virtual string.");
}

string ChildClass::overwrite_non_virtual_string() {
  string a = "Overwritten non-virtual string.";
  string temp = ParentClass::get_virtual_string();
  temp = a;
  return temp;
}

ChildClass::~ChildClass() {

}


int main() {
  ParentClass* super_str = new ChildClass();
  // ChildClass* awesome_str = new ChildClass();
  cout << super_str->get_virtual_string() << endl;
  cout << super_str->get_non_virtual_string() << " " << ((ChildClass*)super_str)->overwrite_non_virtual_string();
  return 0;
}
