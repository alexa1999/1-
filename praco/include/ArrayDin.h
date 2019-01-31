#ifndef ARRAYDIN_H
#define ARRAYDIN_H
//implemente uuna clase que represente un arreglo dinamico de punteros a objetos de tipo polygon,respetando la estructura de la calse de la pregunta 2
//implemente constructores (sin con copia arg)destructor funcion para redimensioinarmn funcion para insrtar al final,insetta....
//emn el main isntanciar obejtos y usar metodos
#include "Polygon.h"
class ArrayDin
{
    public:
        ArrayDin();
        ArrayDin(int arr[], int size);
        ArrayDin(Polygon &o);
//        void resize(int nuevo);
//        void print();
//        int getSize();
//        void clear();
//        void push_back(Polygon val);
//        void insert(const int val, const Polygon p);
//        void remove(const int pos);


        ~ArrayDin();



    private:
        int size;
        Polygon *arr[];

};

#endif // ARRAYDIN_H
