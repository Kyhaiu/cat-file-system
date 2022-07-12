#include "help.h"

using FnPtr = int (Help::*)();

Help::Help(std::string _arg){
  std::map<std::string, FnPtr> commandsMap{
    {"help", &Help::manHelp},
    {"cls", &Help::manCls},
    {"cpin", &Help::manCPin},
    {"cpout", &Help::manCPout},
    {"exit", &Help::manExit},
    {"format", &Help::manFormat},
    {"ls", &Help::manLs},
    {"mkdir", &Help::manMkDir},
    {"mount", &Help::manMount},
    {"new", &Help::manNew},
    {"unmount", &Help::manUnmount},
  };

  (this->*commandsMap[_arg])();
}

int Help::manHelp(){
  std::cout << "Manual do help" << std::endl;
  std::cout << std::endl << std::endl << std::endl;
  std::cout << "Parâmetros: \t\t\t[command] - \tComando suportado pela shell" << std::endl;
  return 0;
}

int Help::manCls(){
  std::cout << "Manual do comando cls" << std::endl;
  std::cout << std::endl << std::endl << std::endl;
  std::cout << "Descrição: \t\t\t Limpa a tela do terminal" << std::endl;
  return 0;
}

int Help::manCPin(){
  std::cout << "Manual do comando cpin" << std::endl;
  std::cout << std::endl << std::endl << std::endl;
  std::cout << "Parâmetros: \t\t\t[command] - \tComando suportado pela shell" << std::endl;
  return 0;
}

int Help::manCPout(){
  std::cout << "Manual do comando cpout" << std::endl;
  std::cout << std::endl << std::endl << std::endl;
  std::cout << "Parâmetros: \t\t\t[command] - \tComando suportado pela shell" << std::endl;
  return 0;
}

int Help::manExit(){
  std::cout << "Manual do comando exit" << std::endl;
  std::cout << std::endl << std::endl << std::endl;
  std::cout << "Parâmetros: \t\t\t[command] - \tComando suportado pela shell" << std::endl;
  return 0;
}

int Help::manFormat(){
  std::cout << "Manual do comando format" << std::endl;
  std::cout << std::endl << std::endl << std::endl;
  std::cout << "Parâmetros: \t\t\t[command] - \tComando suportado pela shell" << std::endl;
  return 0;
}

int Help::manLs(){
  std::cout << "Manual do comando ls" << std::endl;
  std::cout << std::endl << std::endl << std::endl;
  std::cout << "Parâmetros: \t\t\t[command] - \tComando suportado pela shell" << std::endl;
  return 0;
}

int Help::manMkDir(){
  std::cout << "Manual do comando mkdir" << std::endl;
  std::cout << std::endl << std::endl << std::endl;
  std::cout << "Parâmetros: \t\t\t[command] - \tComando suportado pela shell" << std::endl;
  return 0;
}

int Help::manMount(){
  std::cout << "Manual do comando mount" << std::endl;
  std::cout << std::endl << std::endl << std::endl;
  std::cout << "Parâmetros: \t\t\t[command] - \tComando suportado pela shell" << std::endl;
  return 0;
}

int Help::manNew(){
  std::cout << "Manual do comando new" << std::endl;
  std::cout << std::endl << std::endl << std::endl;
  std::cout << "Parâmetros: \t\t\t[command] - \tComando suportado pela shell" << std::endl;
  return 0;
}

int Help::manUnmount(){
  std::cout << "Manual do comando unmount" << std::endl;
  std::cout << std::endl << std::endl << std::endl;
  std::cout << "Parâmetros: \t\t\t[command] - \tComando suportado pela shell" << std::endl;
  return 0;
}