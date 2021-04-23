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
  int is_integer(int num);
  string is_letter(string str);
};

#endif