#ifndef FIBONACCI_H_
#define FIBONACCI_H_
#include <vector>

class Fibonacci {
public:
  Fibonacci(unsigned int n);
  unsigned int fill_fibonacci(unsigned int n);
  unsigned int find_fibonacci(unsigned int n);
  virtual ~Fibonacci();
private:
  std::vector<unsigned int> fibonacci_sequence;
};

#endif /* FIBONACCI_H_ */
