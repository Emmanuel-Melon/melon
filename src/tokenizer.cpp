#include <vector>
#include <typeinfo>
#include <stdexcept>
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

    if (identifier.is_integer(character))
    {
      char number = character;
      Token token;
      token.set_type(typeid(character).name());
      token.set_value(character);
      vect.push_back(token);
      // while (identifier.is_integer(input[cursor]))
      // {
      // number += input[cursor];
      // }
      cursor++;
      continue;
    }
    else if (identifier.is_letter(character))
    {
      Token token;
      token.set_type("letter");
      token.set_value(character);
      vect.push_back(token);
      cursor++;
      continue;
    }
    else
    {
      throw std::invalid_argument("received negative value");
    }
  }

  return vect;
}