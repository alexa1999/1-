#include <iostream>
using namespace std;

 class Point{
 public:
	 Point();
	 Point(double,double);
	 Point(Point const &o);
	 double getX();
	 double getY();
	 void print();
 private:
	 double x,y;
 };
 Point::Point()
 {
	 x=0.0;
	 y=0.0;
 }
 Point::Point(double x,double y)
 {
	 this->x=x;
	 this->y=y;
 }
 Point::Point(Point const &o)
 {
	 this->x=o.x;
	 this->y=o.y;
 }
 double Point::getX()
 {
	 return x;
	 
 }
 double Point::getY()
 {
	 return y;
 }
 void Point::print()
 {
	 cout<<"("<<x<<";"<<y<<")"<<endl;
 }
 void swapp(Point *x,Point *y)
 {
	 Point t=*x;
	 *x=*y;
	 *y=t;
 }
// seleccion,burbuja y podemos usar el quic
void ordenar(Point p[],int tam)
 {
	 for(int i=0;i<tam-1;i++)
		 for(int j=0;j<tam-i-1;j++)
			 if((p+j)->getX() > (p+j+1)->getX()) ////*(arr+j).getX()
				swapp(p+j,p+j+1);
 }
// para poder invocar funciones de ...uso flechita (p+1)-> para que imprima el sigueinte elemento 
int main(int argc, char *argv[]) {
//	 Point a(10,2);
//	 Point b(9,20);
//	 Point c(1,20);
//	 Point k[]={a,b,c};
////	 Point p[]={Point(1,2)} tengo que ponerle constante a el operador copia
//     a.print(); 
//	 ordenar(k,3);
//	 a.print(); 
	Point p[]={Point(5,4),Point(2,3),Point(5,3),Point(6,5),Point(7,6)};
	int length =sizeof(p)/sizeof(p[0]);
	ordenar(p,length);
	p->print();
	/*(*p).print(); p->()*/
	Point *arr =new Point[5];
	*arr=Point(10,2);
	*(arr +1)=Point(18,2);
	*(arr +2)=Point(19,3);
	*(arr +3)=Point(70,45);
	*(arr +4)=Point(50,4);
	arr->print();
	delete [] arr;
	
	return 0;
}

