#include <iostream>
#include <vector>

using namespace std;

int main() {
  vector<vector<int>> v(4);
  for (unsigned int i = 0; i < v.size(); ++i) {
    for (unsigned int j = 0; j < v.size(); ++j) {
      if (i == j) {
        v[i].push_back(1);
      }
      v[i].push_back(0);
    }
  }
  for (unsigned int i = 0; i < v.size(); ++i) {
    for (unsigned int j = 0; j < v.size(); ++j) {
      cout << v[i].at(j) << " ";
    }
    cout << endl;
  }
  cout << endl;
  //Create a 2 dimensional vector with matrix!
  // 1 0 0 0
  // 0 1 0 0
  // 0 0 1 0
  // 0 0 0 1


  v.insert(v.begin(), vector<int>(5));
  for (unsigned int i = 0; i < v[0].size(); ++i) {
    v[0][i] = 1;
  }
  for (unsigned int i = 0; i < v.size(); ++i) {
    v[i][4] = 1;
  }
  for (unsigned int i = 0; i < v.size(); ++i) {
    for (unsigned int j = 0; j < v.size(); ++j) {
      cout << v[i].at(j) << " ";
    }
    cout << endl;
  }
  cout << endl;
  // Extend it to the following format:
  // 1 1 1 1 1
  // 0 1 0 0 1
  // 0 0 1 0 1
  // 0 0 0 1 1
  // 0 0 0 0 1

  for (unsigned int i = 0; i < v.size() / 2; ++i) {
    for (unsigned int j = 0; j < v.size(); ++j) {
      int temp = v[i][j];
      v[i][j] = v[4 - i][j];
      v[4 - i][j] = temp;
    }
  }
  for (unsigned int i = 0; i < v.size(); ++i) {
    for (unsigned int j = 0; j < v.size(); ++j) {
      cout << v[i].at(j) << " ";
    }
    cout << endl;
  }
  cout << endl;
  // Mirror it horizontaly!

  for (unsigned int i = 0; i < v.size(); ++i) {
    for (unsigned int j = 0; j < v.size() / 2; ++j) {
      int temp = v[i][j];
      v[i][j] = v[i][4 - j];
      v[i][4 - j] = temp;
    }
  }
  for (unsigned int i = 0; i < v.size(); ++i) {
    for (unsigned int j = 0; j < v.size(); ++j) {
      cout << v[i].at(j) << " ";
    }
    cout << endl;
  }
  // Mirror it verticaly!

  return 0;
}
