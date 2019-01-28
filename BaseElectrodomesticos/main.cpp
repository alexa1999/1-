#include <iostream>
using namespace std;
#include "Control.h"
#include <windows.h>
#include <cstdlib>


int main(){
   system("color 5B");
    while (true){

        Control c;
        int elec=0;
        cout<<endl;
        cout<<".......                  TIENDA                ......."<<endl;cout<<endl;cout<<endl;
        cout<<"      1- ORDENAR ELECTRODOMESTICOS "<<endl;cout<<endl;
        cout<<"      2- INGRESAR NUEVOS ELECTRODOMESTICOS"<<endl;cout<<endl;
        cout<<"      3- MODIFICAR ELECTRODOMESTICOS"<<endl;cout<<endl;
        cout<<"      4- ELIMINAR ELECTRODOMESTICOS "<<endl;cout<<endl;
        cout<<"      5- BUSCAR ELECTRODOMESTICOS"<<endl;cout<<endl;
        cout<<"      6- IMPRIMIR REGISTRO"<<endl;cout<<endl;
        cout<<"      7- VACEAR REGISTRO"<<endl;cin>>elec;
        c.opcion(elec);
        system("pause");
        system("CLS");

    }

    return 0;
}
