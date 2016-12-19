#include "catch.h"
#include "Fibonacci.h"

TEST_CASE("Zeroth element in fibonacci") {
  Fibonacci fib(0);
  REQUIRE(fib.find_fibonacci(0) == 0);
}

TEST_CASE("First element in fibonacci") {
  Fibonacci fib(1);
  REQUIRE(fib.find_fibonacci(1) == 1);
}

TEST_CASE("Several elements in fibonacci") {
  Fibonacci fib(4);
  REQUIRE(fib.find_fibonacci(4) == 3);
}
