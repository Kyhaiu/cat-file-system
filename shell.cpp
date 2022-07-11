#include "./shell.h"

// Função que separa uma string em um vetor dado um separador
std::vector<std::string> split(const std::string& text, char sep)
{
    std::vector<std::string> tokens;
    std::size_t start = 0, end = 0;

    while ((end = text.find(sep, start)) != std::string::npos)
    {
        tokens.push_back(text.substr(start, end - start));
        start = end + 1;
    }

    tokens.push_back(text.substr(start));
    return tokens;
}

// Construtor vazio da classe
Shell::Shell(){
  possibleCommands.push_back("cpin");
  possibleCommands.push_back("cpout");
  possibleCommands.push_back("exit");
  possibleCommands.push_back("format");
  possibleCommands.push_back("help");
  possibleCommands.push_back("ls");
  possibleCommands.push_back("mkdir");
  possibleCommands.push_back("mount");
  possibleCommands.push_back("new");
  possibleCommands.push_back("unmount");
}

// Obtém o nome do comando a ser executado
std::string Shell::getCommandName()
{
  return commandName;
}

// Obtém os argumentos do comando
std::vector<std::string> Shell::getArgs()
{
  return args;
}

// Retorna a lista de comando que a shell suporta
std::vector<std::string> Shell::getPossibleCommands()
{
  return possibleCommands;
}

// Atribui o nome do comando a ser executado
void Shell::setCommandName(std::string _commandName)
{
  commandName = _commandName;
}

// Atribui os argumentos do comando a ser executado
void Shell::setArgs(std::vector<std::string> _args)
{
  args = _args;
}

// Realiza o parser do comando a ser executado
// caso ele exista retorna true
// caso o comando não exista retorna falso
bool Shell::parsedCommand(std::string command)
{
  int s = -1;
  for (int i = 0; i < command.size(); i++)
  {
    if(command.find(' ') != std::string::npos)
    {
      s = i;
      break;
    }
  }

  if (s > 0)
  {
    Shell::setCommandName(command.substr(0, s));
    Shell::setArgs(split(command.substr(s+1), ' '));
  } 
  else 
  {
    /// Caso não exista parâmetros 
    Shell::setCommandName(command);
    std::vector<std::string> emptyList;
    Shell::setArgs(emptyList);
  }

  // verifica se o comando existe
  for(auto element: possibleCommands)
  {
    if(Shell::getCommandName() == element)
    {
      return true;
    }
  }

  return false;
}

void Shell::executeCommand() {
  std::cout << "Informe um comando" << std::endl;
  std::string commandLine;

  std::getline(std::cin, commandLine);

  if(!Shell::parsedCommand(commandLine))
  {
    std::cout << "O comando " << Shell::getCommandName() << " não é reconhecido" << std::endl;
    return;
  }

  std::cout << "Argumentos: ";
  for(auto i: Shell::getArgs())
    std::cout << i << std::endl;

  std::string command = Shell::getCommandName();

  if (command == "cpin")
  {
    std::cout << "Executando o comando: " << command << std::endl;
  }
  else if (command == "cpout")
  {
    std::cout << "Executando o comando: " << command << std::endl;
  }
  else if (command == "exit")
  {
    std::cout << "Executando o comando: " << command << std::endl;
    std::cout << std::endl << std::endl << std::endl << "bye.." << std::endl;
    std::exit(0);
  }
  else if (command == "format")
  {
    std::cout << "Executando o comando: " << command << std::endl;
  }
  else if (command == "help")
  {
    std::cout << "Executando o comando: " << command << std::endl;
  }
  else if (command == "ls")
  {
    std::cout << "Executando o comando: " << command << std::endl;
  }
  else if (command == "mkdir")
  {
    std::cout << "Executando o comando: " << command << std::endl;
  }
  else if (command == "mount")
  {
    std::cout << "Executando o comando: " << command << std::endl;
  }
  else if (command == "new")
  {
    std::cout << "Executando o comando: " << command << std::endl;
  }
  else if (command == "unmount")
  {
    std::cout << "Executando o comando: " << command << std::endl;
  }
}


