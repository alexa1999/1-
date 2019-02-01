#include <iostream>
#include "Polygon.h"
#include "Triangle.h"
#include "ArrDyn.h"
#include "Rectangle.h"
using namespace std;
ostream& operator<<(ostream &output,Polygon &p){
    output<<" ("<<p.getX()<<","<<p.getY()<<")";
    return output;
}
int main()
{
    Rectangle rect(3,6);
    Triangle tri(4,5);
    Rectangle rect1(6,6);
    Triangle tri1(9,2);
    Polygon *pol1=&rect;
    Polygon *pol2=&tri;
    Polygon *pol3=&rect1;
    Polygon *pol4=&tri1;


//    pol3->printa();
//    pol4->printa();

    Polygon *p[4]={pol1,pol2,pol3,pol4};
    ArrDyn a(p,4);
    a.print();

}
