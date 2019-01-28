#include "Electrodomesticos.h"

string Electrodomesticos::get_nombre(){//obtiene
    return nombre;
}
string Electrodomesticos::get_disponible(){
    return disponible;
}
void Electrodomesticos::set_nombre(string a){//ajusta
    nombre=a;
}
void Electrodomesticos::set_disponible(string a){
    disponible=a;
}
int Electrodomesticos::get_precio(){
    return precio;
}
void Electrodomesticos::set_precio(int a){
    precio=a;
}
