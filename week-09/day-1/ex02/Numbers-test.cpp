#include "catch.h"
#include "Numbers.h"

TEST_CASE("Sum method") {
  Numbers num;
  std::vector<int> vec = {1, 2, 3, 4, 5, 5, 6, 6};
  REQUIRE(num.sum(vec) >= 0);
}

TEST_CASE("Sum method with empty list") {
  Numbers num;
  std::vector<int> vec;
  REQUIRE(num.sum(vec) == 0);
}

TEST_CASE("Sum method with one element") {
  Numbers num;
  std::vector<int> vec = {0};
  REQUIRE(num.sum(vec) >= 0);
}
