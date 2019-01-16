#include <iostream>
using namespace std;
void swapp(int &a,int &b)
{
	int t=a;
	a=b;
	b=t;
}

bool com1(int a,int b)
{
	return a>b;
}
bool com2(int a,int b)
{
	return a<b;
}
void ordenar (int arreglo[], int tam,bool(*fp)(int,int))
{
	int i, j;
	
	for (i = 0; i <tam; i++)
		for (j = 0; j < tam-1; j++)
			if ((*fp)(arreglo[j],arreglo[j+1])){
				swapp(arreglo[j],arreglo[j+1]);
	}
			
}
//void ordenardec (int *arreglo, int tam)
//{
//	int i, j;
//	
//	for (i = 0; i <tam; i++)
//		for (j = 0; j < tam-1; j++)
//			if (*(arreglo+j) > *(arreglo+j + 1) ){
//				swapp(&arreglo[j],&arreglo[j+1]);
//	}
//			
//}

int sum(int a,int b)
{
	int res=a+b;
	return res;
}
int *get()
{
	int *x=new int;
	*x=5;
	return x;
}
int main(int argc, char *argv[]) {
//	int x=5;
//	int *ptr=&x;
//	cout<<ptr<<endl;//dir de x
//	cout<<*ptr<<endl;//valor de x
//	
//	int **ptrptr=&ptr;
//	cout<<ptrptr<<endl;//dir de ptr
//	cout<<*ptrptr<<endl;//contenido de direccion de ptr que es la dir de x es analogo a poner ptr
//	cout<<**ptrptr<<endl;//5
	
//	int z;
//	int(*fp)(int,int);//puntero a funcion
//	
//	fp=sum;//para que apunte a la funciojn
//	z=(*fp)(3,4);//es igual al a de abajo.
//	z=sum(3,4);
//	cout<<z<<endl;
	

//	int arr[]={54,34,6,90};
///*	bool (*fp)(int,int);*/
////	fp=comp1;
////	ordenar(arr,4,fp);
//	ordenar(arr,4,com1);
//	
//	for(int i=0;i<4;i++)
//		cout<<arr[i]<<" ";
////	fp=comp2;
////	ordenar(arr,4,fp);
//	cout<<endl;
//	ordenar(arr,4,com2);
//	for(int i=0;i<4;i++)
//		cout<<arr[i]<<" ";
	/////new delete
//	int *p=get();
//	cout<<*p<<endl;
//	delete p;
//	int *p;
//	for(int i=0;i<3;++i)
//	{
//		p=get();
//		cout<<*p<<endl;
//	}
//	
	int numi;
	cout<<"hoe many items?";
	cin>> numi;
	int *arr=new int[numi];
	for(int i=0; i<numi;++i)
	{
		cout<<"enter item "<< i<<": ";
		cin>>arr[i];
	}
	for(int i=0; i<numi;++i)
	{
		cout<<arr[i];
	}
	delete[] arr;
	
	return 0;
}

