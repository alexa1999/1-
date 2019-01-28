#ifndef TIENDA_H
#define TIENDA_H


#include "Maquina.h"
#include<iostream>
#include <string>
#include <string>
#include <string.h>
#include <sstream>
#include <fstream>
#include <cstdlib>
#include <conio.h>
#include<stdio.h>
#include<conio.h>
using namespace std;


class Tienda
{
    public:
        Tienda();
        int get_tamanio();
        void cambiar(int, int ,string,string);
        void imprimir();
        void borrar(int);
        void vacear();
        template <typename T>
        void swapp(T*,T*);

        bool comparar(int a, int b);

        bool compChar(char a, char b);
        int comodin(string,string);
//        template <typename T>
        void ord_precio();
        void ord_alf();
        void ord_numEl();
        bool buscar(string,string);
        void bus_prod(string);
        void bus_numEl(int);
        int conv_char(char);
        void agregar(string,string,int);
        ~Tienda();
    protected:
        char p_l(string);
        int lenght(string);

        void mod_arch(string,string,string,int,int);
        string convertiratexto(float );
        int convertiranumero(string);
        string obt_linea(string,int);
        int contador=1000;
    private:
        Maquina *a;
        int tamanio=0;
};

#endif // TIENDA_H
