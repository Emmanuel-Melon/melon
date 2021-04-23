#include <vector>
#include "../include/identify.h"
#include "../include/tokenizer.h"

Tokenizer::Tokenizer() {}

vector<Token> Tokenizer::tokenize(string input)
{
  TokenIdentifier identifier;
  int cursor = 0;
  vector<Token> vect;

  while (cursor < input.length())
  {
    char character = input[cursor];
    if(identifier.is_integer(character)) {
      Token token;
      token.set_type("integer");
      token.set_value(character);
      vect.push_back(token);
    }
    else if (identifier.is_letter(character))
    {
      Token token;
      token.set_type("letter");
      token.set_value(character);
      vect.push_back(token);
    }
    cursor++;
  }

  return vect;
}