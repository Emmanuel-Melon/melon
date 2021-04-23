#include <iostream>
#include <iterator>
#include <string>
#include <regex>
#include <map>
#include <thread>
#include <ctime>

#include "../include/tokenizer.h"

using namespace std;

int main(int argc, char *argv[])
{
  Tokenizer tokenizer;

  vector<Token> tokens;
  tokens = tokenizer.tokenize("God of War");

  for (int i = 0; i < tokens.size(); i++)
  {
    tokens[i].display_type();
  }
  return 0;
}
