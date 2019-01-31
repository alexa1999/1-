#ifndef POLYGON_H
#define POLYGON_H
#include <iostream>

using namespace std;

class Polygon
{
protected:
    int whi,hei;
public:

        Polygon(int x,int y):whi(x),hei(y){}

        virtual int area(void)=0;
        void printa()
        {
            cout<<this->area()<<endl;
        }
        //void set_value()
};

#endif // POLYGON_H
