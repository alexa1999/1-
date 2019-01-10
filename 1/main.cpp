#include <iostream>

using namespace std;

int main()
{
//    int x;
//    int y;
//    cout<< "ingrese x: ";
//    cin>>x;
//    cout<< "ingrese y: ";
//    cin>>y;
//    int suma=x+y;
//    int resta=x-y;
//    int div=x/y;
//    int mul=x*y;
//    cout<<"suma: "<< suma <<endl;
//    cout<<"resta: "<<resta <<endl;
//    cout<<"div: "<<div <<endl;
//    cout<<"mul: "<<mul <<endl;
///////////////17
//    cout<< "1 2 3 4 \n"<<endl;
//    cout<< "1 "<<"2 "<<"3 "<<"4 \n";
//    cout<<"1 ";
//    cout<<"2 ";
//    cout<<"3 ";
//    cout<<"4 "<<endl;
//////////18
//    int num;
//    int num1;
//    cout<<" ingrese num ";
//    cin>>num;
//    cout<<" ingrese num ";
//    cin>>num1;
//    if(num ==num1)
//        cout<<"estos numeros son iguales"<<endl;
//    if(num >num1)
//        cout<<num <<"es mayor que "<<num1<<endl;
//    if(num <num1)
//        cout<<num <<"es menor que "<<num1<<endl;
//
///////////19
//
//    int x;
//    int y;
//    int z;
//    cout<< "ingrese x: ";
//    cin>>x;
//    cout<< "ingrese y: ";
//    cin>>y;
//    cout<< "ingrese z: ";
//    cin>>z;
//    int suma=x+y+z;
//
//    int mul=x*y*z;
//    int mayor=x;
//    int menor=x;
//
//    if(y>mayor)
//        mayor=y;
//    if(z>mayor)
//        mayor=z;
//    if(y>menor)
//        menor=y;
//    if(z>menor)
//        menor=z;
//    cout<<"suma "<<suma<<endl;
//    cout<<"promedio "<<suma/3<<endl;
//    cout<<"producto "<<mul<<endl;
//    cout<<"menor "<<menor<<endl;
//    cout<<"mayor "<<mayor<<endl;
//
/////////////20
//    int radio;
//    cout<<"ingrese el radio de un circulo"<<endl;
//    cin>>radio;
//    int di=radio*2.0;
//    int cir=2*314159;
//    int area=3.14159*radio*radio;
//    cout<<"diametro"<< di<<endl;
//    cout<<"circulo"<< cir<<endl;
//    cout<<"area"<< area<<endl;
////////////////21
//    cout<< "*********    ***      *       *\n";
//    cout<< "*       *  *     *   ***     * *\n";
//    cout<< "*       * *       * *****   *   *\n";
//    cout<< "*       * *       *   *    *     *\n";
//    cout<< "*       * *       *   *   *       *\n";
//    cout<< "*       * *       *   *    *     *\n";
//    cout<< "*       * *       *   *     *   *\n";
//    cout<< "*       *  *     *    *      * *\n";
//    cout<< "*********    ***      *       *" << endl;
// /////////////22
//    cout << "*\n**\n***\n****\n*****\n";
/////////23
//    int num1, num2,num3, num4,num5,mayor,menor;
//    cout << "ingrese 5 numeros: ";
//    cin >> num1 >> num2 >> num3 >> num4 >> num5;
//
//    mayor = num1;
//    menor = num1;
//
//    if ( num1 > mayor )
//        mayor = num1;
//
//    if ( num2 > mayor )
//        mayor = num2;
//
//    if ( num3 > mayor )
//        mayor = num3;
//
//    if ( num4 > mayor )
//        mayor = num4;
//
//    if ( num5 > mayor )
//        mayor = num5;
//
//    if ( num1 < menor )
//        menor = num1;
//
//    if ( num2 < menor )
//        menor = num2;
//
//    if ( num3 < menor )
//        menor = num3;
//
//    if ( num4 < menor )
//        menor = num4;
//
//    if ( num5 < menor )
//        menor = num5;
//
//    cout << "mayor es " << mayor<<endl;
//    cout << "menor es " << menor<<endl;
///////////////////24
//    int x;
//    cout<<"x ";
//    cin>>x;
//    if (x%2==0){
//        cout<<"es par"<<endl;
//    }
//    else{
//        cout<<"es impar"<<endl;
//    }
/////////////25
//    int x=10;
//    int y=5;
//    if (x%y==0){
//        cout<<x <<"es multiplo de" <<y<<endl;
//    }
/////////////26
//    cout << "* * * * * * * *\n";
//    cout << " * * * * * * * *\n";
//    cout << "* * * * * * * *\n";
//    cout << " * * * * * * * *\n";
//    cout << "* * * * * * * *\n";
//    cout << " * * * * * * * *\n";
//    cout << "* * * * * * * *\n";
//    cout << " * * * * * * * *\n\n";
//
//    cout << "* * * * * * * *\n * * * * * * * *\n* * * * * * * *\n";
//    cout<< " * * * * * * * *\n* * * * * * * *\n * * * * * * * *\n";
//    cout<< "* * * * * * * *\n * * * * * * * *\n";
//////////////////27
//    char letra;
//
//    cout << "ingresa un caracter: ";
//    cin >> letra;
//
//    cout << letra << "es equivalente a "<< static_cast< int > ( letra ) << endl;
//////////////////28
//    int numero;
//    cout<<" Ingrese un numero de 5 caracteres  :";
//    cin >> numero;
//    int d=numero/10000;
//    cout<<d<<"|";
//    d=numero/1000%10;
//    cout<<d<<"|";
//    d=numero/100%10;
//    cout<<d<<"|";
//    d=numero/10%10;
//    cout<<d<<"|";
//    d=numero%10;
//    cout<<d<<endl;
///////////////29
    int num;

    num = 0;
    cout << "\nENTERO\tCUADRADO\tCUBO\n"<< num << '\t' << num * num << '\t' << num * num * num << "\n";

    num = num + 1;
    cout << num << '\t' << num * num << '\t' << num * num * num << "\n";

    num = num + 1;
    cout << num << '\t' << num * num << '\t' << num * num * num << "\n";

    num = num + 1;
    cout << num << '\t' << num * num << '\t' << num * num * num << "\n";

    num = num + 1;
    cout << num << '\t' << num * num << '\t' << num * num * num << "\n";

    num = num + 1;
    cout << num << '\t' << num * num << '\t' << num * num * num << "\n";

    num = num + 1;
    cout << num << '\t' << num * num << '\t' << num * num * num << "\n";

    num = num + 1;
    cout << num << '\t' << num * num << '\t' << num * num * num << "\n";

    num = num + 1;
    cout << num << '\t' << num * num << '\t' << num * num * num << "\n";

    num = num + 1;
    cout << num << '\t' << num * num << '\t' << num * num * num << "\n";

    num = num + 1;
    cout << num << '\t' << num * num << '\t' << num * num * num << endl;
//////////////30
    float pesolib,pesokil;
    float alturaspul,alturamet;
    cout<<"si deseas poner su peso en libras"<<endl;
    cout<<"ponga su peso en libras: ";
    cin>>pesolib;
    cout<<endl;
    cout<<"pona su altura en pulgadas: "<<endl;
    cin>>alturaspul;
    cout<<endl;

    float bmi1=(pesolib*703)/(alturaspul*alturaspul);
    if(bmi1<18.5)
        cout<<"bajo peso"<<endl;
    if(bmi1>18.5 && bmi1<24.9)
        cout<<"normal"<<endl;
    if(bmi1>25 && bmi1<29.9)
        cout<<"sobre peso"<<endl;
    if(bmi1>30)
        cout<<"obeso"<<endl;

    cout<<"si deseas poner su peso en kilogramos"<<endl;
    cout<<"ponga su peso en kilogamos: ";
    cin>>pesolib;
    cout<<endl;
    cout<<"pona su altura en metros: "<<endl;
    cin>>alturaspul;
    cout<<endl;

    float bmi=(pesokil)/(alturamet*alturamet);
    if(bmi<18.5)
        cout<<"bajo peso"<<endl;
    if(bmi>18.5 && bmi<24.9)
        cout<<"normal"<<endl;
    if(bmi>25 && bmi<29.9)
        cout<<"sobre peso"<<endl;
    if(bmi>30)
        cout<<"obeso"<<endl;


/////////////31
    double kilcond = 0, cosPorK = 0, kilgalon = 0,tarifaEstac = 0, peajeDiario = 0, costManejDia = 0;

    cout << "Ingrese su total de kilometros recorridas por día ";
    cin >> kilcond;

    cout << "Ingrese su costo por galón de gasolina: ";
    cin >> cosPorK;

    cout << "ngrese su promedio de millas por galón: ";
    cin >> kilgalon;

    cout << "Ingrese sus tarifas de estacionamiento por día: ";
    cin >> tarifaEstac;

    cout << "Ingrese sus peajes por día: ";
    cin >> peajeDiario;

    costManejDia = ((kilcond / kilgalon) * cosPorK) + tarifaEstac + peajeDiario;

    cout << "\nCoste de conducción diario: " << costManejDia << endl;
}
