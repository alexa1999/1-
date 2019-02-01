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
        int getX() {
            return whi;
        }
        int getY() {
            return hei;
        }
        virtual int area(void)=0;
        void printa()
        {
            cout<<this->area()<<endl;
        }
        //void set_value()
};
//ostream& operator<<(ostream &output,Polygon &p){
//    output<<" ("<<p.getX()<<","<<p.getY()<<")";
//    return output;
//}
#endif // POLYGON_H
