#ifndef SHELL_H_INCLUDED
#define SHELL_H_INCLUDED
#include <vector>
#include <string>
#include <iostream>
#include <stdlib.h>

class Shell
{
  private:
    std::vector<std::string> args;
    std::string commandName;
    std::vector<std::string> possibleCommands;

  public:
    Shell();
    bool parsedCommand(std::string command);
    std::string getCommandName();
    std::vector<std::string> getArgs();
    std::vector<std::string> getPossibleCommands();
    void setCommandName(std::string _function);
    void setArgs(std::vector<std::string> _args);
    void executeCommand();

};

#endif // SHELL_H_INCLUDED