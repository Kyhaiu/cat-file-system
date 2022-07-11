#include <iostream>
#include <stdint.h>
using namespace std;

typedef struct MapaBits{
        unsigned char *mapaBits;

        MapaBits(unsigned short int mapaBits);
        unsigned short int tamanhoSetores(unsigned short int  setoresLogicos);
        void setorVazio();
      
      
}__attribute__((packed)) MapaBits;

MapaBits::MapaBits(unsigned short int  setoresLogicos){

    

}
