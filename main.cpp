
#include <iostream>
#include <cstring>
// #include "Controle.h"
#include "./shell.h"

using namespace std;
int main(int argc, char *argv[]) {
    
    // FILE* disco;
    // int numeroSetores;
    // Controle *controleFunções = new Controle();
    char *nome;
    char *op;

    Shell* sh = new Shell();

    while(1)
    {
      sh->executeCommand();
    }

    
    // if (argc > 1){
    //     nome = argv[1];
    // }else{
    //     cout << "ERROR MESSAGE: Invalid Arguments." <<endl;
    //     exit(-1);
    // }


    // disco = fopen(nome, "w+");
    // if(disco == NULL){
    //     cout << "ERROR: Not Open (FORMAT)." <<endl;
    //     return -1;
    // }

    // cout << "Numero de Setores: ";
    // cin >> numeroSetores;
    // //->format(disco, numeroSetores);
    // fclose(disco);
    // cout << "Formatado com sucesso" <<endl;
    // int tamanho =  ((numeroSetores * 512)/1024)/1024;
    // cout << "Tamanho do disco: " << tamanho << "MiB" << endl; 

}