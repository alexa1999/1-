#include <iostream>
#include "Polygon.h"
#include "Rectangle.h"
#include "Triangle.h"
using namespace std;
//data=new int[0]
int main()
{
    Polygon *p1=new Rectangle(3,3);
	Polygon *p2=new Triangle(2,6);

	p1->printa();
	p2->printa();

    return 0;
}
