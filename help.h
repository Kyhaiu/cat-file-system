#ifndef HELP_H_INCLUDED
#define HELP_H_INCLUDED
#include <map>
#include <string>
#include <iostream>
#include "./commands.h"

class Help
{
    private:
      std::string arg;
      int manHelp();
      int manCls();
      int manCPin();
      int manCPout();
      int manExit();
      int manFormat();
      int manLs();
      int manMkDir();
      int manMount();
      int manNew();
      int manUnmount();
    
    public:
      Help(std::string _arg);
      std::string getArg();
      void setArg(std::string _arg);
      void showHelp();
};

#endif // HELP_H_INCLUDED