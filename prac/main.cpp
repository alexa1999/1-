#include <iostream>

using namespace std;
int tamano(char cad[])
{
    int tam=0;
    for(int i=0;cad[i]!='\0';i++)
    {
        tam++;
    }
    return tam;
}
int uno(int n)
{
    int i=2;
    for(i;i<n;i++){
        if(!(i%2))
            cout<<i<<",";
    }
    cout<<i;
}
int suma(int arr[],int longi)
{

    if(longi==1)
        return arr[0];
    else
        return arr[longi-1]+suma(arr,longi-1);
}
int palindrom(char *arr,int longi)
{
    if(longi<2)
        return true;
    if(*(arr)!=*(arr+longi-1))
        return false;
    return palindrom(arr+1,longi-2);
}
int convChar(char a)
{
    return a-'0';
}

//void cambcad(char *a[][4],char *b[][4],int ind)
//{
//    int i = 0 ;
//    for(i;i<4;i++)
//    {
//        b[ind][i]=a[ind][i];
//    }
//    b[ind][ i ] = '\n' ;
//}
void swapp(char *a,char *b)
{
    char t=*a;
    *a=*b;
    *b=t;
}
void ordenar(char nom[][4],int tam)
{
//    int cont=1;
    for(int j=0;j<tam;j++){
//    {
        //cont=0;
        for(int i=0;i<tam-1;i++){

            if(convChar(nom[i][0])>convChar(nom[i+1][0])){
                swapp(&(nom[i][0]),&(nom[i+1][0]));

            }
        }
    }

}
int main()
{
    //    int i=20;
//    uno(i);
//    int arr[]={1,2,3,4,8};
//    cout<<suma(arr,5);

//    char a[]="aaaaanaaaaa";
//    cout<<palindrom(a,tamano(a));

//    char al[2][2]={"b","h"};
//    cout<<al[1][0];
//    char i='a';
//    int k=static_cast<int>(i);
//    cout<<k;
//    int a[]={4,1,6,9,2};
//    ord(a,5);
//    cout<<a[0]<<endl;
//    cout<<a[1]<<endl;
//    cout<<a[2]<<endl;
//    cout<<a[3]<<endl;
//    cout<<a[4]<<endl;

    char Nombres[4][4] = {{"j"},{"b"},{"u"},{"\0"}};
    int k=4;
    ordenar(Nombres,k);
    for(int i = 0; i < 4;++i){

            cout<<Nombres[i][0];

        cout<<endl;
    }
    //cout<<wi(Nombres,0);
//    char a='d';
//    cout<<a-'0';
    return 0;
}
