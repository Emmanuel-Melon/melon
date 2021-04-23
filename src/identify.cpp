#include <regex>
#include <string>
#include "../include/identify.h"

TokenIdentifier::TokenIdentifier() {}


int TokenIdentifier::is_integer(int num)
{
  regex rgx(this->NUMBER);
  smatch smatch;
  return num;
}

string TokenIdentifier::is_letter(string str)
{
  regex rgx(this->LETTER);
  smatch smatch;
  return str;
}
