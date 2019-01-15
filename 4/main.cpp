#include <iostream>

using namespace std;
void swapp(int &a,int &b)
{
	int t=a;
	a=b;
	b=t;
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
void inversa(int arr[],int tam)
{
	int cont=0;
	int t=tam-1;
	for(int i=0;i<tam;i++)
	{
		if(cont!=(tam/2))
		{
			swapp(arr[i],arr[t--]);
			cont++;
			
		}
	}
}
//# de primos,pal con const.invertir swap
bool isPal(const int cadena[],const int tam)
{
	int k=tam;
	for(int i=0; i<tam;i++)
	{
		if(i==(k)/2)
		{
			break;
		}
		else{
			if(cadena[i]==cadena[k-1])
			{
				k--;
				
				return true;
				
			}
			else
				return false;
		}
	}
}
void ordenar (int arreglo[], int tam)
{
	int i, j, temporal;
	
	for (i = tam - 1; i > 0; i--)
		for (j = 0; j < i; j++)
			if (arreglo[j] > arreglo[j + 1]) {
				swapp(arreglo[j],arreglo[j+1]);
	}
			
}
int primo(const int arr[],const int length)
{
	int ptim=0;
	
	for(int n=0; n<length ; n++){
		
		if(esPrimo(arr[n])==1){
			ptim++;
		}
		else{
			cout<<" ";
		}
	}
	cout<<ptim;
}
int main()
{
	int arr[]={1,4,2,7,5,11};
	//inversa(arr,4);
	//ordenar(arr,4);
//	cout<<arr[0]<<endl;
//	cout<<arr[1]<<endl;
//	cout<<arr[2]<<endl;
//	cout<<arr[3]<<endl;
	int n=6;
	//esPrimo(n);
	//    int arr1[]={1,2,3,2,1};
	//    int tam=5;
	//    cout<<isPal(arr1,tam);
	
	primo(arr,n);
	return 0;
}
