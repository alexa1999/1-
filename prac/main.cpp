#include <iostream>

using namespace std;
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

    char Nombres[4][4] = {{"j"},{"p"},{"a"},{"\0"}};
    int k=4;
    ordenar(Nombres,k);
    for(int i = 0; i < 4;++i){

            cout<<Nombres[i][0];

        cout<<endl;
    }
    //cout<<wi(Nombres,0);
    char a='d';
    cout<<a-'0';
    return 0;
}
