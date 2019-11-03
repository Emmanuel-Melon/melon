#include<iostream>
#include<iterator>
#include<string>
#include<regex>
#include<map>

using namespace std;

class RegexMatcher {
private:
  regex letter_regex("[a-zA-Z]");
  egex white_space_regex("\s+");
  regex number_regex("^[0-9]+$");
  regex operator_regex("['+', '-', '*', '/', '%']");

public:
  RegexMatcher () {};

  // method signatures
  template <typename T> bool match_input(T input);
};


// methods
template <typename T> bool RegexMatcher::match_input(T input) {
  cout << input << endl;
  return true;
}
