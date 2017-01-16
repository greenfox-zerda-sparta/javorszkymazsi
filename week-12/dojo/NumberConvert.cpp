#include "NumberConvert.h"
#include <numeric>
#include <iostream>

std::vector<std::pair<std::string, int > > number_pairs = { std::make_pair("M", 1000), std::make_pair("CM", 900), std::make_pair("D", 500), std::make_pair("CD", 400), std::make_pair("C", 100), std::make_pair("XC", 90), std::make_pair("L", 50), std::make_pair("XL", 40), std::make_pair("X", 10), std::make_pair("IX", 9), std::make_pair("V", 5), std::make_pair("IV", 4), std::make_pair("I", 1) };

std::string arabic_to_roman(unsigned int num) {
  std::pair<std::string, int> temp_pair = std::make_pair("", (int)num);
  std::string result;
  while (temp_pair.second > 0) {
    temp_pair = std::accumulate(number_pairs.begin(), number_pairs.end(), temp_pair, concat);
  }
  return temp_pair.first;
}

std::pair<std::string, int> concat(std::pair<std::string, int>& temp_pair, std::pair<std::string, int> vector_pair) {
  while (temp_pair.second - vector_pair.second >= 0) {
    temp_pair.first += vector_pair.first;
    temp_pair.second -= vector_pair.second;
  }
  return temp_pair;
}