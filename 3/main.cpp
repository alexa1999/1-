#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>


using namespace std;
bool multiplo(int x, int y)
{
    return (!(y % x ));
}
void cuadra(int num)
{
    for (int i = 0; i < num; i++) {
        for (int j = 0; j < num; j++) {
            cout << "*";
        }
        cout<<endl;
    }
}
void separacion(long n) {
    long numDig = 1;
    for (long i = n; i > 10; i /= 10) {
        numDig *= 10;

    }

    while (numDig > 0) {
        cout << (n / numDig) % 10 << " "<<endl;
        numDig /= 10;

    }
    cout << endl;
}
double celsius(double f) {
    return (f - 32) * 5 / 9;
}

double farenheit(double c) {
    return c * 9 / 5 + 32;
}
void esPerfecto(int num)
{
    int k=0;
    for(int i=1; i<num;i++)
    {
        if(num%i==0)
        {
            k+=i;



        }

    }

    if(k==num)
    {
        cout<<endl;
        cout<<k<<"; " ;
        for(int i=1;i<num;i++)
        {
            if(num%i==0)
            {
                cout<<i<<";";

            }
        }
    }
}
int reversa(int x)
{
    int cont=0;
    int num1=x;
    int mod =1;
    int mod1 =1;
    int resultado;

    while(x>0){

        x=x/10;
        cont++;


    }

    cout<<"EL numero "<<num1<<", en su forma invertida es: ";
    for(int i=1;i<=cont;i++){

        mod=mod*10;

        resultado=(num1%mod)/(mod1);

        mod1=mod1*10;

        cout<<resultado;
    }
}
int puntos(int prome) {
    if (prome >= 90) {
        return 4;
    }
    else if (prome >= 80){
        return 3;
    }
    else if (prome >= 70) {
        return 2;
    }
    else if (prome >= 60) {
        return 1;
    }
    else {
        return 0;
    }
}
void numer(int num){

    int num1=num;
    int k;
    cout<<"ingrese un numero: "<<endl;
    cin>>k;
    while(num!=k)
    {

        if((k>=num-20) && (k<=num+20)){

            cout<<"estas bien cerca "<<endl;
            cout<<"ingrese un numero: "<<endl;
            cin>>k;

        }
        if((1000>=k-20)&&(0<=k+20)){
            cout<<"estas bien lejos"<<endl;
            cout<<"ingrese un numero: "<<endl;
            cin>>k;
        }



    }
    cout<<"ganaste"<<endl;
}

int pot(int base, int exponent) {
    if (exponent == 0) { return 1; }

    return base * pot(base, exponent - 1);
}
void hanoi(int num,char A,char C,char B)
{
    if(num==1)
    {
            cout<<"Mueva el bloque "<<num<<" desde "<<A<<" hasta  "<<C<<endl;

    }
    else
    {
        hanoi(num-1,A,B,C);
        cout<<"Mueva el bloque "<<num<<" desde "<<A<<" hasta  "<<C<<endl;
        hanoi(num-1,B,C,A);
    }
}
unsigned long factorial(unsigned long num) {
    // base case
    if (num <= 1) {
        cout << num <<endl;
        return 1;
    } else {
        cout << num << " * ";
        return num * factorial(num - 1);
    }
}

int main()
{
//    int x=3;
//    int y=9;
//    cout<< (multiplo(x,y)? "true ":"false")<<endl;
////////22
//    int num;
//    cout<<"ingrese la cantidad de asteriscos: ";
//    cin>>num;
//    cuadra(num);
///////////24
//    long n;
//    cout<<"ingrese los digitos; ";
//    cin>>n;
//    separacion(n);
////26

//    for (int c = 0; c <= 100; ++c) {
//        cout << c ;
//        cout<<": ";
//        cout<< farenheit(c) << endl;
//    }
//    cout << "celsius" << endl;
//
//    for (int f = 32; f <= 212; f++) {
//        cout << f ;
//        cout<<": ";
//        cout<< celsius(f) << endl;
//    }
/////////28
//    for(int i=5;i<10000;i++)
//        esPerfecto(i);
///////////30
//    int h=9857;
//    reversa(h);
//    cout<<endl;
//////////32
//    cout<<"ingresa tu promedio: ";
//    int prom;
//    cin>>prom;
//    cout<<"tu punto de calidad es :"<<puntos(prom)<<endl;
//////34
//    srand (time(NULL));
//
//    int num=rand() % 1000 + 1;;
//    cout<<num<<endl;
//    numer(num);
//736
//    int base=2;
//    int expo=5;
//    cout<<pot(base,expo);

////38
        int n;
        char A,B,C;

        cout<<"Los clavijas son A B C\n";
        cout<<"Numero de discos: ";
        cin>>n;
        hanoi(n,'A','C','B');
//////40
//    for (int counter = 0; counter <= 10; ++counter) {
//        cout<<counter<<"..."<< factorial(counter)<<endl;
//    }

    return 0;
}
