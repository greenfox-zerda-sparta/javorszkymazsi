#include <iostream>
#include <map>
#include <fstream>

// Write a program that creates a text file named alice_words.txt
// containing an alphabetical listing of all the words,
// and the number of times each occurs, in the text version of
// Alice’s Adventures in Wonderland.
// (You can obtain a free plain text version of the book,
// along with many others, from http://www.gutenberg.org.)
//
// The first 10 lines of your output file should look something like this:
//
// Word              Count
// =======================
// a                 631
// a-piece           1
// abide             1
// able              1
// about             94
// above             3
// absence           1
// absurd            2
//
// How many times does the word alice occur in the book?
// What is the longest word in Alice in Wonderland?
// How many characters does it have?

int main() {
  std::ifstream input_file("alice-in-wonderland.txt");
  std::string word;
  std::map<std::string, int> word_count;
  while (input_file >> word) {
    word_count[word] += 1;
  }
  input_file.close();

  std::ofstream output_file("word_count_alice.txt");
  for (std::map<std::string, int>::iterator it = word_count.begin(); it != word_count.end(); ++it) {
    output_file << it->first << " - " << it->second << std::endl;
  }
  output_file.close();
  return 0;
}
