#include<iostream>

using namespace std;

class Command {
  private:
  int num;
  char title;
  bool valid;

  public:
  Command () : title('a') { /* ctor */ }
  void get_methods();
  char get_title();
  bool is_valid(char command);
};


void Command::get_methods() {
  std::cout << "getting all methods related to this command" << std::endl;
}

char Command::get_title() {
  return this->title;
}

bool Command::is_valid(char command) {
  return true;
}