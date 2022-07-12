#ifndef COMMANDS_H_INCLUDED
#define COMMANDS_H_INCLUDED
#include <vector>
#include <string>

namespace Commands
{
  const std::vector<std::string> commands = {
    "cls",
    "cpin",
    "cpout",
    "exit",
    "format",
    "help",
    "ls",
    "mkdir",
    "mount",
    "new",
    "unmount"
  };
};

#endif //COMMANDS_H_INCLUDED