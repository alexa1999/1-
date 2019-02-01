#ifndef ARRDYN_H
#define ARRDYN_H

#include <iostream>
#include "Polygon.h"
using namespace std;

class ArrDyn
{
public:
    ArrDyn();
    ArrDyn(Polygon **ndata,int nsize);
    ArrDyn(const ArrDyn &o);
    void push_back(Polygon *val);
    void insert(Polygon *val,int pos);
    void remove(int pos);
    void print();
    ~ArrDyn();

private:
    Polygon **data;
    int sizee;
    void resizee(int newsize);
};


#endif // ARRDYN_H
