#include <iostream>
using namespace std;

char alphabetSlicer(char beginner, char array[6]) {
  char abc[] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r', 's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
  array[0] = beginner;
  for (int i = 0; i < 26; i++) {
    if (abc[i] == beginner) {
      for (int j = 1; j < 5; j++) {
        if (i + j < 26) {
          array[j] = abc[i + j];
        } else {
          array[j] = abc[i + j - 26];
        }
      }
    }
  }
  array[5] = '\0';
  return array[6];
}

//Implement the above declared function to return the next 5 characters in the english alphabet
//after the character 'beginner' in an array of characters.
//The last chracter of the array should be '\0'.
//If there are less then 5 characters left after 'beginner' start from the beginning.
//So, alphabetSlicer(y) should return {'z','a','b','c','d','\0'}

int main(int argc, char** argv){
  char arr[6];
  alphabetSlicer('d', arr);
  for (int i = 0; i < 6; i++) {
    cout << arr[i];
  }
  cout << endl;
  alphabetSlicer('z', arr);
  for (int j = 0; j < 6; j++) {
    cout << arr[j];
  }
  return 0;
}
