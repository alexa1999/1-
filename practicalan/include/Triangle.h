#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Polygon.h"
class Triangle:public Polygon
{
public:
    Triangle(int a,int b):Polygon(a,b){}
    int area(){return whi*hei/2;}
};

#endif // TRIANGLE_H
