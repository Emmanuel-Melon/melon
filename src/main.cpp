#include<iostream>
#include<iterator>
#include<string>
#include<regex>
#include<map>
#include<thread>
#include<ctime>

#include"../include/identify.h"


using namespace std;

int main (int argc, char *argv[]) {
  TokenIdentifier identify;
  cout << identify.is_integer(5) << endl;
  cout << identify.is_string("Hello") << endl;
  return 0;
}
