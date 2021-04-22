#include<iostream>
#include<iterator>
#include<string>
#include<regex>
#include<map>
#include<thread>
#include<ctime>

// custom libs
#include"identify.h"


using namespace std;

int main (int argc, char *argv[]) {
  RegexMatcher matcher;
  CLI cli;
  std::string str = "int num = 5;";
  matcher.match_input_type(str);

  cli.processArguments(argv, argc);

  return 0;
}
