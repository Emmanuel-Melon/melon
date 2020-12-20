#include"Matcher.cpp"

using namespace std;

int main () {
  RegexMatcher matcher;
  std::string str = "louis vu";
  matcher.match_input_type(str);

  return 0;
}
