#include <iostream>

using namespace std;

int main()
{
    char a='5';//53
    char b='8';//56
    int k=static_cast< int > ( a ) ;
    int h=static_cast< int > ( b ) ;

    int j=(k-48)+(h-48);
    cout<<j<<endl;
/////escriba un prgrama que me pida una mayuscula y lo convierta a minusu
    char letraA;
    char letraa;
    cout<<"ingrse la letra mayuscula :";
    cin>>letraA;
    cout<<"ingrse la letra minuscula :";
    cin>>letraa;
    int letraAA=static_cast< int > ( letraA )+32 ;
    int letraaa=static_cast< int > ( letraa )-32 ;
    cout<<letraA<<"->"<<static_cast< char > ( letraAA ) <<endl;
    cout <<letraa<<"->"<<static_cast< char > ( letraaa ) ;
    //IMPLEMENTE U PROGRAAM QUE SOLICITE UN CARATER Y ME IINDIQUE SI ES UNA LETR O ES UN NUMEROY SI NO ES NINGUNOI DE LOS DOS QUE EM DIGA numero  es de 49 a 57
    char car;
    cout<<"ingrese un caracter: ";
    cin>>car;

    int kiki=static_cast< int > ( car ) ;
    if(kiki>48 && kiki<58)
        cout<<"es un numero"<<endl;
    if(kiki>65 && kiki<90 || kiki >97 && kiki<122)
        cout<<"es un caracter"<<endl;
    else
        cout<<"no es ninguno de los dos"<<endl;



}
