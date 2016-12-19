#include "Fibonacci.h"

Fibonacci::Fibonacci(unsigned int n) {
  for (unsigned int i = 0; i < n + 1; ++i) {
    fibonacci_sequence.push_back(fill_fibonacci(i));
  }
}

unsigned int Fibonacci::fill_fibonacci(unsigned int n) {
  if (n == 0) {
    return 0;
  } else if (n == 1) {
    return 1;
  } else {
    return find_fibonacci(n - 2) + find_fibonacci(n - 1);
  }
}

unsigned int Fibonacci::find_fibonacci(unsigned int n) {
  return fibonacci_sequence.at(n);
}

Fibonacci::~Fibonacci() {

}

