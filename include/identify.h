#ifndef TokenIdentifier_H
#define TokenIdentifier_H

#include<iostream>
#include<string>

using namespace std;

class TokenIdentifier
{
private:
  string LETTER = "[a - zA - Z]";
  string WHITESPACE = "s + ";
  string NUMBER = "^[0 - 9] + $";
  char OPERATORS[5] = {'+', '-', '*', '/', '%'};
public:
  TokenIdentifier();
  bool is_integer(char character);
  bool is_letter(char character);
  bool test_regex(char input, string reg);
};

#endif