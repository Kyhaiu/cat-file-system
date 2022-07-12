#include <iostream>
#include <string>
#include "./shell.h"


/**
 * @brief Limpa a tela (Console)
 * 
 * @return * void 
 */
void ClearScreen()
{
  std::cout << std::string( 100, '\n' );
}

/**
 * @brief Função que separa uma string em uma lista de acordo com o separador
 * 
 * @param text Texto a ser separado
 * @param char - Caractere separador
 * @return Lista com os elementos separados de acordo com o separador.
 */
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
  possibleCommands = Commands::commands;
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


/**
 * @brief Função que realiza a analise do comando e armazena o nome e os parâmetros.
 * 
 * @param command - Comando a ser analisado  
 * @return Verdadeiro - Caso o comando seja válido
 * @return Falso - Caso comando seja inválido
 */
bool Shell::parsedCommand(std::string command)
{
  int s = -1;
  // Primeiro espaço representa o nome do comando
  // a partir dele só tem argumentos
  s = command.find(' ');

  // Se s é maior que zero, significa que possui argumentos
  if (s > 0)
  {
    Shell::setCommandName(command.substr(0, s));
    Shell::setArgs(split(command.substr(s+1), ' '));
  } 
  else 
  {
    /// Caso não exista argumentos 
    Shell::setCommandName(command);
    // Cria uma lista vazia
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

/**
 * @brief Função que executa os comandos informados ao usuário. 
 * 
 * @return * void 
 */
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
  std::vector<std::string> args = Shell::getArgs();

  if (command == "cls")
  {
    ClearScreen();
  }
  else  if (command == "cpin")
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
    Help* help = new Help(args[0]);
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


