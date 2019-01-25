#include<iostream>
#include<stdio.h>
using namespace std;
int convChar(char a)
{
    return a-'0';
}
bool intasc(int a,int b)
{
    return a<=b;
}
bool charasc(char a,char b)
{
    return convChar(a)<= convChar(b);
}

template<typename A>
void swapp(A *a, A *b)
{
    A t = *a;
    *a = *b;
    *b = t;
}
template<typename B>
int div (B arr[], int inicio, int fin, bool (*fp)(B,B))
{
    int pivot = arr[fin];
    int i = (inicio - 1);

    for (int j = inicio; j <= fin- 1; j++)
    {
        if ((*fp)(arr[j],pivot))
        {
            i++;
            swapp<B>(&arr[i], &arr[j]);
        }
    }
    swapp<B>(&arr[i + 1], &arr[fin]);
    return (i + 1);
}
template<typename B>
void quickSort(B arr[], int inicio, int fin,bool(*fp)(B,B))
{

    if (inicio < fin)
    {
        int pi = div<B>(arr, inicio, fin,fp);

        quickSort<B>(arr, inicio, pi - 1,fp);
        quickSort<B>(arr, pi + 1, fin,fp);
    }
}

template<typename B>
void printArray(B arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        cout<< arr[i]<<" ";

}
int tamanio(char cad[])
{
    int tam=0;
    for(int i=0;cad[i]!='\0';i++)
    {
        tam++;
    }
    return tam;
}
template<typename A>
void swapp(A **a, A **b)
{
    A *t = *a;
    *a = *b;
    *b = t;
}
template<typename B>
int div (B **arr ,int inicio, int fin, bool (*fp)(B,B))
{
    int pivot = arr[fin][0];
    int i = (inicio - 1);

    for (int j = inicio; j <= fin- 1; j++)
    {
        if ((*fp)(arr[j][0],pivot))
        {
            i++;
            swapp<B>(&arr[i], &arr[j]);
        }
    }
    swapp<B>(&arr[i + 1], &arr[fin]);
    return (i + 1);
}
template<typename B>
void quickSort(B **arr, int inicio, int fin,bool(*fp)(B,B))
{

    if (inicio < fin)
    {
        int pi = div<B>(arr, inicio, fin,fp);

        quickSort<B>(arr, inicio, pi - 1,fp);
        quickSort<B>(arr, pi + 1, fin,fp);
    }
}
int main()
{
//    int arr[] = {10, 7, 8, 9, 1, 5};
//    int n = sizeof(arr)/sizeof(arr[0]);
//
//	bool(*fp)(int,int);
//	fp=intasc;
//    quickSort<int>(arr, 0, n-1,fp);
//    printf("Sorted array: ");
//    printArray<int>(arr, n);
//    cout<<endl;
//
//    char car[]="anelb";
//    int t=tamanio(car);
//
//    bool(*fp1)(char,char);
//	fp1=charasc;
//    quickSort<char> (car,0,t-1,fp1);
//    printArray<char>(car, t);
//
//    cout<<endl;
    char *Nombres[] = {"cesar","bran","uni","aanel"};
    bool(*fp)(char,char);
	fp=charasc;


	int cont=1;
    int orden[5];
    while(cont<=4){
        orden[cont]=cont;
        cont++;
    }

    quickSort<char> (Nombres,0,cont-1,fp);
    for(int i = 0; i < cont;i++){

            cout<<Nombres[i];

        cout<<endl;
    }

    return 0;
}
