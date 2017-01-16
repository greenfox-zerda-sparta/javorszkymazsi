#define CATCH_CONFIG_MAIN

#include "catch.h"
#include "NumberConvert.h"


TEST_CASE("arabic_to_roman(number) returns number*I if number < 4") {
  REQUIRE(arabic_to_roman(1) == "I");
  REQUIRE(arabic_to_roman(2) == "II");
  REQUIRE(arabic_to_roman(3) == "III");
}

TEST_CASE("arabic_to_roman() returns IV to number 4") {
  REQUIRE(arabic_to_roman(4) == "IV");
}

TEST_CASE("arabic_to_roman() returns V to number 5") {
  REQUIRE(arabic_to_roman(5) == "V");
}

TEST_CASE("arabic_to_roman() returns VI, VII, VIII to number 6, 7, 8") {
  REQUIRE(arabic_to_roman(6) == "VI");
  REQUIRE(arabic_to_roman(7) == "VII");
  REQUIRE(arabic_to_roman(8) == "VIII");
}

TEST_CASE("arabic_to_roman() returns IX to number 9") {
  REQUIRE(arabic_to_roman(9) == "IX");
}

TEST_CASE("arabic_to_roman() returns X to number 10") {
  REQUIRE(arabic_to_roman(10) == "X");
}

TEST_CASE("arabic_to_roman() returns XLII to number 42") {
  REQUIRE(arabic_to_roman(42) == "XLII");
}

TEST_CASE("arabic_to_roman() returns CXCIX to number 199") {
  REQUIRE(arabic_to_roman(199) == "CXCIX");
}

TEST_CASE("arabic_to_roman() returns CDXLII to number 442") {
  REQUIRE(arabic_to_roman(442) == "CDXLII");
}

TEST_CASE("arabic_to_roman() returns MMII to number 2002") {
  REQUIRE(arabic_to_roman(2002) == "MMII");
}

TEST_CASE("arabic_to_roman() returns XXII to number 22") {
  REQUIRE(arabic_to_roman(22) == "XXII");
}

TEST_CASE("arabic_to_roman() returns MMCMXCIX to number 2999") {
  REQUIRE(arabic_to_roman(2999) == "MMCMXCIX");
}

TEST_CASE("arabic_to_roman() returns MMCCCXXXIII to number 2333") {
  REQUIRE(arabic_to_roman(2333) == "MMCCCXXXIII");
}

TEST_CASE("arabic_to_roman() returns MMCDLVIV to number 2444") {
  REQUIRE(arabic_to_roman(2444) == "MMCDXLIV");
}