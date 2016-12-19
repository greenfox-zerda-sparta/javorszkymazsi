#define CATCH_CONFIG_MAIN
#include "catch.h"
#include "WordToolbox.h"

TEST_CASE("WordToolbox constructor working") {
  WordToolbox wordToolbox("foo");
  REQUIRE(wordToolbox.get_string_held() == "foo");
}

TEST_CASE("Check anagram method - true") {
  WordToolbox wordToolbox("foo");
  REQUIRE(wordToolbox.is_ananagram("ooF"));
  wordToolbox.set_string_held("bloft");
  REQUIRE(wordToolbox.is_ananagram("flobt"));
  REQUIRE(wordToolbox.is_ananagram("flotb"));
}

TEST_CASE("Check anagram method - false") {
  WordToolbox wordToolbox("foo");
  REQUIRE_FALSE(wordToolbox.is_ananagram("ofof"));
  wordToolbox.set_string_held("aloft");
  REQUIRE_FALSE(wordToolbox.is_ananagram("floate"));
  REQUIRE_FALSE(wordToolbox.is_ananagram("falsetto"));
}

TEST_CASE("Check count_how_many() - 0") {
  WordToolbox wordToolbox("Tarzan's toenails");
  REQUIRE(wordToolbox.count_how_many('p') == 0);
}

TEST_CASE("Check count_how_many() - 1") {
  WordToolbox wordToolbox("Tarzan's toenails");
  REQUIRE(wordToolbox.count_how_many('z') == 1);
}

TEST_CASE("Check count_how_many() - several") {
  WordToolbox wordToolbox("Tarzan's toenails");
  REQUIRE(wordToolbox.count_how_many('a') == 3);
  REQUIRE(wordToolbox.count_how_many('t') == 2);
}

TEST_CASE("Check count_how_many() with Jane") {
  WordToolbox wordToolbox("Me Tarzan, You Jane");
  REQUIRE(wordToolbox.count_how_many('m') == 1);
  REQUIRE(wordToolbox.count_how_many('n') == 2);
}

