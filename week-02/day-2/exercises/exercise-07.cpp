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
