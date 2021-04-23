#include <regex>
#include <string>
#include "../include/identify.h"

TokenIdentifier::TokenIdentifier() {}

bool TokenIdentifier::is_integer(char character)
{
  return this->test_regex(character, this->NUMBER);
}

bool TokenIdentifier::is_letter(char character)
{
  return this->test_regex(character, this->LETTER);
}

bool TokenIdentifier::test_regex(char input, string reg)
{
  regex rgx(reg);
  smatch result;
  // regex_search(input, result, rgx);
  // std::cout << result[0] << std::endl;
  return true; // return regex test value
}
