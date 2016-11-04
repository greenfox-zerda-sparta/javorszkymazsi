#include <iostream>

using namespace std;

struct Stack {
  int size;
  double* array;
};

Stack* construct_stack(double* input, int size) {
  Stack* stack = new Stack;
  stack->size = size;
  double* arr = new double[size];
  for (int i = 0; i < size; i++) {
    arr[i] = input[i];
  }
  stack->array = arr;
  return stack;
}

void stack_push(Stack& stack, double value) {
  stack.size += 1;
  double* new_arr = new double[stack.size];
  for (int i = 0; i < stack.size; ++i) {
    if (i < stack.size - 1) {
      new_arr[i] = stack.array[i];
    } else {
      new_arr[i] = value;
    }
  }
  delete[] stack.array;
  stack.array = new_arr;
}

double stack_pop(Stack& stack) {
  double top = stack.array[stack.size - 1];
  stack.size -= 1;
  double* new_arr = new double[stack.size];
  for (int i = 0; i < stack.size; ++i) {
    new_arr[i] = stack.array[i];
  }
  delete[] stack.array;
  stack.array = new_arr;
  return top;
}

bool is_stack_empty(Stack& stack) {
  if (stack.size <= 0) {
    return true;
  }
  return false;
}

int main() {
  double a[5] = {4, 9, 13, 4, 53};
  Stack* stack = construct_stack(a, 5);
  cout << "The stack contains elements as follows: ";
  for (int i = 0; i < 5; i++) {
    cout << stack->array[i] << " ";
  }
  cout << endl;
  stack_push(*stack, 143);
  cout << "We added 143 to our stack, so now it looks like this: ";
  for (int i = 0; i < 6; i++) {
    cout << stack->array[i] << " ";
  }
  cout << endl;
  cout << "Last element added was " << stack_pop(*stack);
  cout << endl;
  cout << "After getting the last one out, the stack is the same as the first time: ";
  for (int i = 0; i < 5; i++) {
    cout << stack->array[i] << " ";
  }
  cout << endl;
  if (is_stack_empty(*stack)) {
    cout << "Stack is empty!";
  } else {
    cout << "Stack has things in it!";
  }
  delete[] stack;
  stack = nullptr;
  return 0;
}
