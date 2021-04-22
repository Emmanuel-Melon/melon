#include"identify.h"

RegexMatcher::RegexMatcher() {}

RegexMatcher::RegexMatcher(string grammar){}

template <typename T> bool RegexMatcher::match_input_type(T input) 
{
  std::cout << input << std::endl;
  this->test_string(input);
  return true;
}


void RegexMatcher::test_integer(int num) 
{

  std::cout << num << std::endl;
}

void RegexMatcher::test_string(std::string str) 
{
  // use a raw string
  std::string regExpr("([a-zA-Z])");
  std::regex rgx(regExpr);

  std::smatch result;
  std::regex_search(str, result, rgx);
  std::cout << result[0] << result[1] << std::endl;
}
