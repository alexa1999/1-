#include <iostream>

using namespace std;
void swapp(int &a,int &b)
{
    int t=a;
    a=b;
    b=t;
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

    for(int n=0; n<length ; n++){
        int x=0;
        for(int i=1;i<length +1;i++){
            if(arr[n]%i==0){
                x++;
                //cout<<"x"<<x;
            }
        }
        if(x!=2){
            cout<<" ";
        }else{
            cout<<arr[n]<<endl;

        }
    }
}
int main()
{
    int arr[]={1,4,2,7};
    //inversa(arr,4);
    //ordenar(arr,4);
    cout<<arr[0]<<endl;
    cout<<arr[1]<<endl;
    cout<<arr[2]<<endl;
    cout<<arr[3]<<endl;
//    int arr1[]={1,2,3,2,1};
//    int tam=5;
//    cout<<isPal(arr1,tam);

//    primo(arr,4);
    return 0;
}
