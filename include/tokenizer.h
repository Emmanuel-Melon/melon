#ifndef Tokenizer_H
#define Tokenizer_H

#include <iostream>
#include <string>

using namespace std;

// using enums to identify token types

class Token
{
private:
  string type = "string";
  string value;

public:
  Token() {}
  void display_type () {
    cout << this->type << endl;
  }

  void set_type(string type)
  {
    this->type = type;
  }
  
  void set_value(char value)
  {
    this->value = value;
  }
};

class Tokenizer
{
private:
public:
  Tokenizer();
  vector<Token> tokenize(string input);
};

#endif