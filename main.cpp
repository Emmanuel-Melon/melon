#include<iostream>
#include<iterator>
#include<string>
#include<regex>
#include<map>
#include<thread>
#include<ctime>

#include"Matcher.cpp"


using namespace std;

/**
* current task:
* reading files from the command line
* running inputs
* building a repel
*/
int main (int argc, char *argv[]) {
  RegexMatcher matcher;
  std::string str = "louis vu";
  matcher.match_input_type(str);

  return 0;
}

// let's do TXT for now
