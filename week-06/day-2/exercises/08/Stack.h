#ifndef STACK_H_
#define STACK_H_

class Stack {
public:
  Stack();
  void push(int num) throw(int);
  void pop() throw(int);
  ~Stack();
private:
  unsigned int size;
  int* array;
};

#endif /* STACK_H_ */
