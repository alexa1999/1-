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
