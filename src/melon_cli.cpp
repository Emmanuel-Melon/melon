#include"Command.cpp"
#include<vector>

class CLI {
private:
  std::string platform;
  std::string memory;
  std::string processor;
  std::string user;
  std::string shell;
  vector<Command> commands;
  std::string filename;

public:
  CLI () {};

  void help();
  void processArguments(char *argv[], int argc);
  void runCommand(Command command, int args);
};


void CLI::help() {
  std::cout << "you have selected help" << std::endl;
}

void CLI::processArguments(char *argv[], int argc) {
  Command command;
  this->runCommand(command, 24);
  
  this->filename = argv[0];
  for (int i = 0; i < argc; ++i) {
    std::cout << argv[i] << std::endl;
    Command argv[i];
  }
}

void CLI::runCommand(Command command, int args) {
  std::cout << "running: " << command.get_title() << std::endl;
}
