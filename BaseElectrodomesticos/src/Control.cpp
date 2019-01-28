

#include "Control.h"
//
//bool Control::comparar(int a, int b){
//    return a <= b? true : false;
//}
//////int Control::conv_char(char a){
//////    return a-'0';
//////}
//bool Control::compChar(char a, char b){
//    return (modelo.conv_char(a) <= modelo.conv_char(b))? true : false;
//}
void Control::opcion(int a){
    string nombre,disponible;
    int precio;
    int pos,pen;
    string name;
//    bool(*fp)(int,int);
//    int fp=comparar;
    if(a==1){
        int eleccion;
        cout<<endl;
        cout<<"      Como desea ordenar: "<<endl;
        cout<<"           1->ALFABEETICO"<<endl;
        cout<<"           2->NUMERO DE ELECTRODOMESTICO"<<endl;
        cout<<"           3->PRECIO"<<endl;cin>>eleccion;


        while(eleccion!=0){
            switch(eleccion){
            case 1:
                modelo.ord_alf();
                eleccion=0;
                break;
            case 2:
                modelo.ord_numEl();
                eleccion=0;
                break;
            case 3:
                modelo.ord_precio();
                eleccion=0;
                break;
            }
        }
    }
    if(a==2){

        cout<<"      INGRESA NUEVO NOMBRE: ";cin>>nombre;
        cout<<"      INGRESA SI ESTA DISPONIBLE: ";cin>>disponible;
        cout<<"      INGRESA EL NUEVO PRECIO: ";cin>>precio;
        modelo.agregar(nombre,disponible,precio);
    }
    if(a==3){

        cout<<"      INGRESA POSICION: ";cin>>pos;
        if(modelo.get_tamanio() >=pos){
            cout<<"      INGRESA NUEVO NOMBRE: ";cin>>nombre;
            cout<<"      INGRESA SI ESTA DISPONIBLE: ";cin>>disponible;
            cout<<"      INGRESA EL NUEVO PRECIO: ";cin>>precio;
            modelo.cambiar(pos-1,pen,name,disponible);
        }
        pos=0;
        pen=0;
        name=" ";
    }
    if(a==4){
        cout<<"      INGRESA LA POSICION: ";cin>>pos;
        modelo.borrar(pos-1);
    }
    if(a==5){
        int elec;
        cout<<"      COMO DESE BUSCAR: "<<endl;
        cout<<"           1->NOMBRE"<<endl;
        cout<<"           2->NUMERO DE ELECTRODOMESTICO"<<endl;cin>>elec;
        while(elec!=0){
            switch(elec){
            case 1:
                cout<<"      INGRESA EL NOMBRE DEL  ElECTRODOMESTICO: ";cin>>nombre;
                modelo.bus_prod(nombre);
                elec=0;
                break;
            case 2:
                cout<<"     INGRESA EL NUMERO DE ELECTRODOMESTICO: ";cin>>pos;
                modelo.bus_numEl(pos);
                elec=0;
                break;
            }
        }
    }
    if(a==6){
        modelo.imprimir();
    }
    if(a==7){
        cout<<"DESPUES DE BORRAR TODO EL REGISTRO TIENE QUE VOLVER A ABRIR EL PROGRAMA"<<endl;
        modelo.vacear();
    }
}
