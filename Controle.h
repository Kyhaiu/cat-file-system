#include <iostream>
#include <vector>
#include <algorithm>
#include <stdlib.h>
#include <math.h>
#include <cstdio>

#include <DiretorioRaiz.h>
#include <RegistroInicializacao.h>
#include <MapaBits.h>

typedef struct Controle {
    RegistroInicializacao *rs;
    MapaBits *mb;
    
    
    Controle();
    void formatar( FILE* disco, int numeroSetores);


}Controle;

Controle::Controle(){
    RegistroInicializacao *rs;
    MapaBits *mb;

}

void Controle::formatar(FILE* disco, int numeroSetores){


}
