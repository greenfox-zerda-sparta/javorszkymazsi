#include <iostream>
#include <vector>

using namespace std;

//I think it's an unnecessary function to create provided that this does and uses push_back which does exactly the same
void add_char_to_vector(vector<char>& my_vector, char c);

int main() {
  vector<char> v(0);
  add_char_to_vector(v, 'B');
  add_char_to_vector(v, 'c');
  add_char_to_vector(v, 'F');
  for (unsigned int i = 0; i < v.size(); ++i) {
    cout << v.at(i) << " | ";
  }

  //create a vector of chars with the size of zero;
  //write a function where the user can add characters to the end of this vector

  return 0;
}

void add_char_to_vector(vector<char>& my_vector, char c) {
  my_vector.push_back(c);
}
