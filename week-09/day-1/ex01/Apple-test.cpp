#define CATCH_CONFIG_MAIN
#include "catch.h"
#include "Apple.h"

TEST_CASE("Apple string") {
  Apple apple;
  REQUIRE(apple.get_apple() == "apple");
}
