#ifndef ELECTRODOMESTICOS_H
#define ELECTRODOMESTICOS_H


#include<iostream>
#include <string>
using namespace std;

class Electrodomesticos
{
    public:
        void set_nombre(string a);
        void set_disponible(string a);
        void set_precio(int);
        string get_nombre();
        string get_disponible();
        int get_precio();
    protected:
        string nombre;
        string disponible;
        int precio;
};
#endif // ELECTRODOMESTICOS_H
