#include<iostream>
#include<iterator>
#include<string>
#include<regex>
#include<map>
#include<thread>
#include<ctime>


// @description it uses the ECMAScript grammar
class RegexMatcher {
private:

public:
  RegexMatcher () {};

  ~RegexMatcher () {};

  // method signatures
  template <typename T> bool match_input_type(T input);

  // specific type methods
  void test_integer(int num);
  void test_string(std::string str);
};


// methods
template <typename T> bool RegexMatcher::match_input_type(T input) {
  std::cout << input << std::endl;
  // maintain a pointer to all my functions?

  // dummy execution
  std::cout << typeid(input).name() << std::endl;
  this->test_string(input);
  return true;
}


/**
* @description does test operators
* @param
* @return void
*/
void RegexMatcher::test_integer(int num) {

  std::cout << num << std::endl;
}


/**
* @description does test operators
* @param
* @return void
*/
void RegexMatcher::test_string(std::string str) {
  // use a raw string
  std::string regExpr(R"([a-zA-Z])");
  std::regex rgx(regExpr);

  std::smatch result;
  std::regex_search(str, result, rgx);
  std::cout << result[0] << std::endl;
}
