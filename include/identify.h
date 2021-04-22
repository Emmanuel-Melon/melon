#ifndef REGEXMATCHER_H
#define REGEXMATCHER_H

#include<iostream>
#include<string>

using namespace std;

class RegexMatcher
{
private:
public:
  RegexMatcher();
  RegexMatcher(string grammar);

  // method signatures
  template <typename T>
  bool match_input_type(T input);

  // specific type methods
  void test_integer(int num);
  void test_string(std::string str);
};
#endif