#include <iostream>
using namespace std;
//class Rectangle
//{	
//		int width,height;
//	public:
//		Rectangle(){}
//		Rectangle(int x,int y):width(x),height(y){}
//		int area(){return width*height;}
//		friend Rectangle duplicate(const Rectangle&);
//		
//		
//	
//};
//Rectangle duplicate(const Rectangle& param){
//	Rectangle res;
//	res.width=param.width*2;
//	res.height=param.height*2;
//	return res;
//	
//}
//int main(int argc, char *argv[]) {
//	Rectangle foo;
//	Rectangle bar(2,3);
//	foo=duplicate(bar);
//	cout<<foo.area()<<endl;
//	
//	return 0;
//}

//class Square;
//class Rectangle
//{	
//	int width,height;
//public:
//	
//	
//	int area(){return width*height;}
//	void convert(Square a);
//	
//};
//class Square{
//	friend class Rectangle;
//private: 
//	int side;
//public:
//	Square(int a):side(a){}
//};
//void Rectangle::convert(Square a){
//	width=a.side;
//	height=a.side;
//}
//int main(int argc, char *argv[]) {
//	Rectangle rect;
//	Square sqr(4);
//	rect.convert(sqr);
//	
//	cout<<rect.area()<<endl;
//	
//	return 0;
//}

class Polygon
{
protected:
	int width,height;
public:
	void set_values(int a,int b){width=a ;height =b ;}
	virtual int area(){return 0;}
		
};
class Rectangle:public Polygon{
public:
	int area(){return width*height;}
};
class Triangle:public Polygon{
public:
	int area(){return width*height /2;}
};
int main(int argc, char *argv[]) {
	Rectangle rect;
	Triangle trlg;
//	rect.set_values(4,5);
//	trlg.set_values(4,5);
//	cout<<rect.area()<<endl;
//	cout<<trlg.area()<<endl;
//	//dieferente dforma
//	Rectangle *ptr=&rect;
//	ptr->set_values(4,5);
//	cout<<ptr->area()<<endl;
//	//diferente forma
//	Triangle &ref=trlg;
//	ref.set_values(4,5);
//	cout<<ref.area()<<endl;
	Polygon pol;
	Polygon * p1=&rect;
	Polygon * p2=&trlg;
	Polygon * p3=&pol;
	p1->set_values(4,5);
	p2->set_values(4,5);
	p3->set_values(4,5);
	cout<<rect.area()<<endl;
	cout<<p1->area()<<endl;
	cout<<p2->area()<<endl;
	cout<<p3->area()<<endl;
	
	
	return 0;
}
