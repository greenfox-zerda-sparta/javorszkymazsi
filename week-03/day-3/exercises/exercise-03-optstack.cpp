#include <iostream>

using namespace std;

struct Stack {
  int size;
  int size_of_array;
  double* array;
};

Stack* construct_stack(double* input, int size_of_array) {
  Stack* stack = new Stack;
  stack->size = 2;
  while (stack->size <= size_of_array * 2) {
    stack->size *= 2;
  }
  double* arr = new double[size_of_array];
  for (int i = 0; i < size_of_array; i++) {
    arr[i] = input[i];
  }
  stack->array = arr;
  return stack;
}

void stack_push(Stack& stack, double value) {
  stack.size_of_array += 1;
  double* new_arr = new double[stack.size_of_array];
  for (int i = 0; i < stack.size_of_array; ++i) {
    if (i < stack.size_of_array - 1) {
      new_arr[i] = stack.array[i];
    } else {
      new_arr[i] = value;
    }
  }
  if (stack.size_of_array > stack.size * .8) {
    stack.size *= 2;
  }
  delete[] stack.array;
  stack.array = new_arr;
}

double stack_pop(Stack& stack) {
  double top = stack.array[stack.size_of_array - 1];
  stack.size_of_array -= 1;
  double* new_arr = new double[stack.size_of_array];
  for (int i = 0; i < stack.size_of_array; ++i) {
    new_arr[i] = stack.array[i];
  }
  delete[] stack.array;
  stack.array = new_arr;
  return top;
}



int main() {
  double a[5] = {4, 9, 13, 4, 53};
  Stack* stack = construct_stack(a, 5);

  stack_push(*stack, 8);
  stack_pop(*stack);

  delete[] stack;
  stack = nullptr;
  return 0;
}
