#include "Maquina.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <conio.h>
#include <direct.h>
#include <string>
using namespace std;


Maquina::Maquina(){
    nombre="NULL";
    precio=0;
}
Maquina::Maquina(string i,int j)
{
    nombre=i;
    precio=j;
}
Maquina::Maquina(const Maquina &es){

    this->nombre=es.nombre;
    this->disponible=es.disponible;
    this->precio=es.precio;
    this->Num_Maquina=es.Num_Maquina;
}
bool Maquina::operator >(const Maquina& a){
    if(this->precio >= a.precio){
        return true;
    }
    return false;
}
bool Maquina::operator >=(const Maquina& a){
    if(this->Num_Maquina >= Num_Maquina){
        return true;
    }
    return false;
}
int Maquina::get_numCod(){
    return Num_Maquina;
}
void Maquina::set_numCod(int a){
    Num_Maquina=a;
}
