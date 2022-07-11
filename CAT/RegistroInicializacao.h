#include <iostream>
#include <stdint.h>
using namespace std;

typedef struct RegistroInicializacao{
        unsigned short int tamanhoSetor;// Número de bytes por setor que por padrão é 512 Bytes - 2 Byte
        unsigned char setorCluster; // Número de setores por cluster que por padão é 1 - 1 byte
        unsigned  short int setoresReservados; // Número de setores reservados -  2 byte
        /*numero de setores reservados = tamanho do registro de
         inicialização (em setores) + tamanho do mapa de bits (em
         setores) + tamanho do diretório raiz (em setores)
        */
        unsigned  short int  entradasRaiz; //Quantidade máxima de entradas no diretório raiz - 2 byte
        /* Por padrão o tamanho é igual a 1024 bytes - 32 entradas de 32 bytes. Essa
         quantidade pode ser modificada no momento da formatação,
         entretanto a quantidade escolhida deve ser múltipla de 16 
        */
        unsigned short int mapaBits;  //Tamanho do mapa de bits em setores [(Numero de setores/8)/512]- 2 byte
        unsigned  int  setoresLogico; //Número de setores no volume lógico - 4 byte
        unsigned char erroFor; // Mensagem de boot do disco 0x00 => formatação bem-sucedida 0xFF => erro na formatação - 1 byte
        unsigned char resto[498]; //Não usado 

        RegistroInicializacao::RegistroInicializacao();
        RegistroInicializacao(unsigned short int  setoresLogico);
        RegistroInicializacao(unsigned short int  setoresLogico, unsigned  short int setoresReservados, unsigned short int  entradasRaiz);

}__attribute__((packed)) RegistroInicializacao;


RegistroInicializacao::RegistroInicializacao(){}

RegistroInicializacao::RegistroInicializacao(unsigned short int  setoresLogico){
        tamanhoSetor = 512;
        setorCluster = 1;
        entradasRaiz = 32;//A cada 16  entradras é um setor 
        this -> setoresLogico = setoresLogico;
        erroFor = 0;
       
        
        if(((setoresLogico/8)%512) == 0){
                mapaBits = ((setoresLogico/8)/512);
        }else{
                mapaBits= (((setoresLogico/8)/512) + 1);
        }

        this -> setoresReservados = 3 + mapaBits;
        fill_n(this->resto, (498), 0);//

}