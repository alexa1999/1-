#include <iostream>

using namespace std;
//#include <iostream>
//
//using namespace std;
//void swap(int *ptr1,int *ptr2)
//{
//    int tem=*ptr1;
//    *ptr1=*ptr2;
//    *ptr2=tem;
//
//}
//int *myfunc(){
//    int p=4;
//    return &p;
//
//}
//int main()
//{
//    int x=6;
//    int y=4;
////    swap(&x,&y);
////    cout<<x<<endl;
////    cout<<y<<endl;
/////////caso1
////    int a=9;
////    const int *ptr=&a;
////    //*ptr=1234<-no se puede cambiar;
////    int b=4;
////    ptr=&b;
//////caso 2
////    int * const ptr=&x;
////    *ptr=123;
////    /////////aqui no se puede ptr1=&y;
////    caso3
////    const int * const ptr=&x;
////    int *ptr=myfunc();
////    cout<<*ptr;
//    int arr[]={1,2,3,4};
//    int *ptr=arr;
//    ptr++;
//    cout<<*ptr<<endl;//2
//    int *ptr2=arr+3;
//    cout<<*ptr2<<endl;//4
//    return 0;
//}
#include <iostream>

using namespace std;
void swapp(int *a,int *b)
{
	int t=*a;
	*a=*b;
	*b=t;
}
bool esPrimo(int x)
{

		int a=0;
		for(int i=1;i<=20;i++)
		{
			if(x%i==0)
				a++;
		}
		if (a==2){
			return true;
		}
		else{
			return false;
		}

}
////////reversa,palindrome y ordenamiento
void inversa(int *arr,int tam)
{


	for(int i=0;i<tam-1;i++,tam--)
	{
        swapp(&arr[i],&arr[tam-1]);

    }
}

//# de primos,pal con const.invertir swap
bool isPal(const int *cadena,int tam)
{

	while(tam--)
	{
        return(*cadena++==*(cadena+tam-1));
    }
}
void ordenar (int *arreglo, int tam)
{
	int i, j, temporal;

	for (i = tam - 1; i > 0; i--)
		for (j = 0; j < i; j++)
			if (*(arreglo+j) > *(arreglo+j + 1) ){
				swapp(&arreglo[j],&arreglo[j+1]);
	}

}
int primo(const int *arr,const int length)
{
	int ptim=0;

	for(int n=0; n<length ; n++,arr++){

		if(esPrimo(*arr)==1){
			ptim++;
		}
		else{
			cout<<" ";
		}
	}
	cout<<ptim;
}
void print(int *ptr,int tam)
{
//    for(int i=0;i<tam;i++){
//        cout<<*(ptr+i)<< " ";
//    }
//    cout<<endl;
//    for(int i=0;i<tam;i++,ptr++){
//        cout<<*ptr<< " ";
//    }
    cout<<endl;
    while(tam--)
        cout<<*ptr++<<endl;
    cout<<endl;
}
int main()
{
	int arr[]={1,4,2,7,5,11};
	inversa(arr,6);
	//ordenar(arr,6);
//	cout<<arr[0]<<endl;
//	cout<<arr[1]<<endl;
//	cout<<arr[2]<<endl;
//	cout<<arr[3]<<endl;
//	int n=6;
	//esPrimo(n);
	    int arr1[]={1,2,3,2,9};
	    int tam=5;
	    cout<<isPal(arr1,tam);

	//primo(arr,n);
	return 0;
}







