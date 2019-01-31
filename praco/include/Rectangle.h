#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "Polygon.h"
class Rectangle:public Polygon
{
public:
    Rectangle(int a,int b):Polygon(a,b){}
    int area(){return whi*hei;}
};

#endif // RECTANGLE_H
