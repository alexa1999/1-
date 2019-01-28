#ifndef MAQUINA_H
#define MAQUINA_H

#include "Electrodomesticos.h"
class Maquina:public Electrodomesticos
{
    public:
        Maquina();
        Maquina(string,int);
        Maquina(const Maquina &es);
        bool operator > (const Maquina& a);
        bool operator >= (const Maquina& a);
        int get_numCod();
        void set_numCod(int);
        int Num_Maquina=0;
};

#endif // MAQUINA_H
