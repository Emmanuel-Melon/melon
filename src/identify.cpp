#include <regex>
#include <string>
#include "../include/identify.h"

TokenIdentifier::TokenIdentifier() {}

bool TokenIdentifier::is_letter(char character)
{
  return this->test_regex(&character, this->LETTER);
}

bool TokenIdentifier::is_whitespace(char character)
{
  return this->test_regex(&character, this->WHITESPACE);
}

bool TokenIdentifier::is_integer(char character)
{
  return this->test_regex(&character, this->NUMBER);
}

bool TokenIdentifier::is_operator(char character)
{
  return this->test_regex(&character, this->OPERATORS);
}

bool TokenIdentifier::test_regex(char *text, string regEx)
{
  std::string s{*text};
  regex rgx(regEx);
  smatch result;
  return regex_match(s, regEx) ? true : false;
}
